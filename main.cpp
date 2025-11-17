#include <iostream>
#include <string>
#include "renderpipeline/RenderLib.h"
#include "renderpipeline/ColorEngine.h"
#include "consolecalibration.h"
#include <thread>
#include <chrono>



//Project info:
//Name: Game in console c++
//Run in console!!!

int main() {
    for (true == true; true;) {
        system("cls");
        advlinedraw(*"#",5,2,false);
        advlinedraw(*"#",3,0,true);
        inserttext("HI :3"); // HI :3
        std::this_thread::sleep_for(std::chrono::seconds(1)); //So it wont look bad in console
    }
}