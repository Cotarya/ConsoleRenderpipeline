#include <iostream>
#include <string>
#include "renderpipeline/RenderLib.h"
#include "consolecalibration.h"
#include <thread>
#include <chrono>



//Project info:
//Name: Game in console c++
//Run in console!!!

int main() {
    for (true == true; true;) {
        rendering render;
        render.fillscreen(1);
        render.advlinedraw(*"#",5,2,false);
        render.advlinedraw(*"#",3,0,true);
        render.inserttext("HI :3"); // HI :3
        std::this_thread::sleep_for(std::chrono::seconds(1)); //So it wont look bad in console
    }
}