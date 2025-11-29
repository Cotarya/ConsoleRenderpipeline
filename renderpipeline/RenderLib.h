//
// Created by meowy on 11.11.2025.
//

#pragma once
#include "ColorEngine.h"

#ifndef GAMEINCONSOLE_RENDERLIB_H
#define GAMEINCONSOLE_RENDERLIB_H

#endif //GAMEINCONSOLE_RENDERLIB_H

#include <windows.h>

//Render library

//When using this library for your projects make sure to set up it here
//this is the default
//int MaxScreenX = 100;
//int MaxScreenY = 17;
//


int MaxScreenX = 50;
int MaxScreenY = 29;
int CounterColor = 0;
float sizefix = 2.5;

// Functions

// Fill screen
// Usage

void fillscreen(const int ColorType) {
    for (int i = 0; i < MaxScreenY; i++) {
        for (int j = 0; j < MaxScreenX; j++) {
            if (ColorType == 1) {
                if (CounterColor == 0) {
                    std::cout << "#";
                    CounterColor++;
                }
                else if (CounterColor == 1) {
                    std::cout << "$";
                    CounterColor++;
                }
                else if (CounterColor == 2) {
                    std::cout << "*";
                    CounterColor++;
                }
                else if (CounterColor == 3) {
                    std::cout << "%";
                    CounterColor = 0;
                }
            }
            else {
                std::cout << "@";
            }

        }
        std::cout << std::endl;
    }
}

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//SetConsoleTextAttribute(hConsole, 0);

// Advanced line drawing X3



class rendering {
public:
    void advlinedraw(const char character,const int amount,const int spaceafter,const bool endline) {
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

    void inserttext(const std::string &text) {
        std::cout << text;
    }

    void fillscreen(const int ColorType) {
        for (int i = 0; i < MaxScreenY; i++) {
            for (int j = 0; j < MaxScreenX; j++) {
                if (ColorType == 1) {
                    if (CounterColor == 0) {
                        std::cout << "#";
                        CounterColor++;
                    }
                    else if (CounterColor == 1) {
                        std::cout << "$";
                        CounterColor++;
                    }
                    else if (CounterColor == 2) {
                        std::cout << "*";
                        CounterColor++;
                    }
                    else if (CounterColor == 3) {
                        std::cout << "%";
                        CounterColor = 0;
                    }
                }
                else {
                    std::cout << "@";
                }

            }
            std::cout << std::endl;
        }
    }
};