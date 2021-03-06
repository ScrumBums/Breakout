//
//  Ball.hpp
//  Breakout
//
//  Created by Edward on 9/18/16.
//  Copyright © 2016 Edward. All rights reserved.
//

#ifndef Ball_h
#define Ball_h

#include <stdio.h>
#include <iostream>
#include <string>
#include "MovableObject.h"

const sf::Vector2f INIT_VELOCITY = { -5, -5 };

class Ball : public MovableObject {
    
public:
    
//    Ball(double rad) : MovableObject(rad) {};
    Ball(std::string file_path, sf::RenderWindow &window) : MovableObject(file_path, INIT_VELOCITY) {
        //Center object in constructor here
        //Problem arises if attempting to pass coordinates here because ball object will not be
        //initalized therefore unable to get width and height of sprite to center in window
        setObjectPosition(window.getSize().x / 2 - getObjectWidth() / 2,
                          window.getSize().y / 2 - getObjectHeight() / 2);
    };
    
    void move() { moveObject(); }
};

#endif /* Ball_hpp */





















