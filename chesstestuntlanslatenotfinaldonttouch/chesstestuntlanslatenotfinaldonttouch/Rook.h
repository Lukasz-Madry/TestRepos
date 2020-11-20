#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "ClassChess.h"
#include"Board.h"

class Rook : public Piece
{
public:
    float RPos;
    int Rnr;
    Rook(std::string color, float RPos, int Rnr) : Piece(color) { this->RPos = RPos, this->Rnr = Rnr; }
};