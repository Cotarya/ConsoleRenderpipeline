//
// Created by Meowy on 11/30/2025.
//

#pragma once
#include <iostream>

#ifndef GAMEINCONSOLE_RENDERLIB_H
#define GAMEINCONSOLE_RENDERLIB_H

#endif //GAMEINCONSOLE_RENDERLIB_H

// Define the variables
int v1 = 29;
int v2 = 50;
float v3 = 2.5;

namespace draw {
    void drawline(const char p1,const int p2,const int p3,const bool p4) {
        for (int i = 0; i < p2; i++) {
            std::cout << p1;
        }
        for (int i = 0; i < p3; i++) {
            std::cout << " ";
        }
        if (p4 == true) {
            std::cout << std::endl;
        }
    }
    void print(const std::string &p5) { //Now it makes sense yk
        std::cout << p5;
    }
    void screenfill() {
        for (int i = 0; i < v1; i++) {
            for (int j = 0; j < v2; j++) {
                std::cout << " ";
            }
            std::cout << std::endl;
        }
    }
}