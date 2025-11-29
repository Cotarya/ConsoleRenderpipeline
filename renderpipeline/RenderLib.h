#pragma once

#ifndef GAMEINCONSOLE_RENDERLIB_H
#define GAMEINCONSOLE_RENDERLIB_H

#endif //GAMEINCONSOLE_RENDERLIB_H

//When using this library for your projects make sure to set up it here
//this is the default
//int MaxScreenX = 100;
//int MaxScreenY = 17;
//float sizefix = 2.5;


int MaxScreenX = 50;
int MaxScreenY = 29;
float sizeFix = 2.5;

// Functions

class rendering {
public:
    void advLineDraw(const char character,const int amount,const int spaceafter,const bool endline) {
        for (int i = 0; i < amount; i++) {
            std::cout << character;
        }
        for (int i = 0; i < spaceafter; i++) {
            std::cout << " ";
        }
        if (endline == true) {
            std::cout << std::endl;
        }
        else {
            // TwT
        }
    }

    void insertText(const std::string &text) {
        std::cout << text;
    }

    void fillScreen() {
        for (int i = 0; i < MaxScreenY; i++) {
            for (int j = 0; j < MaxScreenX; j++) {
                std::cout << " ";
            }
            std::cout << std::endl;
        }
    }
};