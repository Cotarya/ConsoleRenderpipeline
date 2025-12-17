#include <iostream>
#include <string>
#include "renderpipeline/RenderLib.h"
#include "consolecalibration.h"
#include <thread>
#include <chrono>

void example() {
    draw::screenfill();
    draw::drawline(*"#",5,2,false);
    draw::drawline(*"#",3,0,true);
    draw::print("HI :3"); // HI :3
    draw::print(":3");
    draw::print(":3");
}

int main() {
    for (true == true; true;) {
        example();
        std::this_thread::sleep_for(std::chrono::seconds(1)); //So it wont look bad in console
    }
}