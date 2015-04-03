//
//  main.c
//  PebbleTemplate
//
//  Created by Fabian Canas on 3/16/15.
//  Copyright (c) 2015 Fabián Cañas. All rights reserved.
//

#include <pebble.h>
#include "lut.h"

Window *my_window;
TextLayer *text_layer;
int animation = 0;
static int paddedScreenWidth = 160;

int texWidth = 16;
int texHeight = 16;
int texture_lut(int x, int y){
    return (x <= (texWidth >> 1)) == (y <= (texHeight >> 1));
}

int16_t accel_x;
int16_t accel_y;

void render_scene(Layer *layer, GContext *ctx) {
    
    uint8_t *screen_buffer = (uint8_t*)((GBitmap*)ctx)->addr;
    
    //calculate the shift values out of the animation value
    int shiftX = (int) animation;
    int shiftY = (int) animation;
    //
    int screenBufferIndex = 0;
    for(int y = 0; y < 168; y++) {
        for(int x = 0; x < paddedScreenWidth; x+=8) {
            uint8_t word = 0;
            int rx = x/2 - (accel_x>>4);
            int ry = y/2 + (accel_y>>6);
            for (int bit = 0; bit<8; bit++) {
                int color = texture_lut((unsigned int)( ( distance_lut(rx + (bit>>2), ry) ) + shiftX) % texWidth,
                                        (unsigned int)( ( angle_lut(rx + (bit>>2), ry) ) + shiftY) % texHeight );
                word |= (color & 1) << (bit);
            }
            screen_buffer[screenBufferIndex] = word;
            screenBufferIndex++;
        }
    }
    animation += 7;
}

Layer *rLayer;

void handleAccelerometerData(AccelData *data, uint32_t num_samples) {
    layer_mark_dirty(rLayer);
    accel_x = data->x;
    accel_y = data->y;
}

void handle_init(void) {
    my_window = window_create();
    
    Layer *window_layer = window_get_root_layer(my_window);
    Layer *render_layer = layer_create(layer_get_bounds(window_layer));
    rLayer = render_layer;
    layer_add_child(window_layer, render_layer);
    layer_set_update_proc(render_layer, render_scene);
    
    window_stack_push(my_window, true);
    
    accel_data_service_subscribe(1, handleAccelerometerData);
}

void handle_deinit(void) {
    text_layer_destroy(text_layer);
    window_destroy(my_window);
}

void increment_animation() {
    animation += 10;
}

int main(void) {
    handle_init();
    app_event_loop();
    handle_deinit();
}