PEBBLE_TOOL = $(HOME)/pebble-dev/PebbleSDK-current/bin/pebble

run: all
	$(PEBBLE_TOOL) install --phone=192.168.1.2

all: src/main.c src/lut.h
	$(PEBBLE_TOOL) build

src/lut.h: tunnel-lut/main.swift
	swift tunnel-lut/main.swift > src/lut.c