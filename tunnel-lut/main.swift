//
//  main.swift
//  tunnel-lut
//
//  Created by Fabian Canas on 3/19/15.
//  Copyright (c) 2015 Fabián Cañas. All rights reserved.
//

import Foundation

let texWidth = 32
let texHeight = 32
let screenWidth = 144/2
let screenHeight = 168/2

var texture :[Int] = []
var distanceTable :[Int] = []
var angleTable :[Int] = []

let stdOut = NSFileHandle.fileHandleWithStandardOutput()

func cConst(const: Int, name: String) -> String {
    return "int \(name) = \(const);\n"
}

func cArray(array: [Int], name: String, type: String = "short") -> String {
    let arrayString = array.reduce("", combine: { (outString, value) in outString + "\(value),"})
    return "\(type) \(name)[\(array.count)] = {\(arrayString)};\n\n"
}

func makeData(input :String) -> NSData {
    return NSString(string: input).dataUsingEncoding(NSUTF8StringEncoding) ?? NSData()
}

for(var x = 0; x < screenWidth; x++) {
    for(var y = 0; y < screenHeight; y++) {
        var ratio = 32.0;
        var halfX = x - screenWidth/2
        var halfY = y - screenHeight/2
        var distance = sqrt(Double(halfX * halfX + halfY * halfY)) % Double(texWidth)
        let angle = Double(texWidth) * atan2( Double(halfX), Double(halfY) ) / M_PI
        distanceTable.append(min(Int(distance), 255))
        angleTable.append(Int(angle))
    }
}

stdOut.writeData(makeData(cConst(screenWidth, "screenWidth")))
stdOut.writeData(makeData(cConst(screenHeight, "screenHeight")))

stdOut.writeData(makeData(cArray(distanceTable, "distance", type:"char")))
stdOut.writeData(makeData(cArray(angleTable, "angle", type: "signed char")))

stdOut.writeData(makeData("int distance_lut(int x, int y){return (int)distance[x + screenHeight * y];}\n"))
stdOut.writeData(makeData("int angle_lut(int x, int y){return (int)(angle[x + screenHeight * y] * -1);}"))
