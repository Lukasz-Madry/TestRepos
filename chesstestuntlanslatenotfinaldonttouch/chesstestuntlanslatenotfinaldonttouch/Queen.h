#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "ClassChess.h"
#include"Board.h"


class Queen : public Piece
{
public:
    float QPos;
    Queen(std::string color, float QPos) : Piece(color) { this->QPos = QPos; }
};