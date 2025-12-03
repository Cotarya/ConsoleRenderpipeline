#include <iostream>
#include <string>
#include "renderpipeline/RenderLib.h"
#include "consolecalibration.h"
#include <thread>
#include <chrono>

void example() {
    render render;
    render.screenFill();
    render.drawline(*"#",5,2,false);
    render.drawline(*"#",3,0,true);
    render.printIL("HI :3"); // HI :3
}

int main() {
    for (true == true; true;) {
        example();
        std::this_thread::sleep_for(std::chrono::seconds(1)); //So it wont look bad in console
    }
}