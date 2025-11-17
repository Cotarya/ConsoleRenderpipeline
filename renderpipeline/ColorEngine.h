//
// Created by meowy on 12.11.2025.
//

#pragma once

#ifndef GAMEINCONSOLE_COLORENGINE_H
#define GAMEINCONSOLE_COLORENGINE_H

#endif //GAMEINCONSOLE_COLORENGINE_H

// Color engine
//Works by getting color name in input and returning a number of it
//So you dont need to do math to get color number

int GetColor(std::string colorname) {
    if (colorname == "black") {
        return 0;
    }
    else if (colorname == "blue") {
        return 1;
    }
    else if (colorname == "green") {
        return 2;
    }
    else if (colorname == "aqua" || colorname == "cyan" ) {
        return 3;
    }
    else if (colorname == "red") {
        return 4;
    }
    else if (colorname == "purple" || colorname == "magenta") {
        return 5;
    }
    else if (colorname == "yellow" || colorname == "brown") {
        return 6;
    }
    return -374812562;
}