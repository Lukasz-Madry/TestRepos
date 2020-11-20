#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "ClassChess.h"
#include"Board.h"

class King : public Piece
{
public:
    float KPos;
    King(std::string color, float KPos) : Piece(color) { this->KPos = KPos; }
};