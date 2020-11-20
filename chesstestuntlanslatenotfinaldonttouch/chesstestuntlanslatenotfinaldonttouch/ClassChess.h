#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


class Piece {
public:

    std::string color;
    Piece(std::string color) { this->color = color; }
    virtual void Move()=0;
    virtual void Fight()=0;
    virtual void Display()=0;
};
