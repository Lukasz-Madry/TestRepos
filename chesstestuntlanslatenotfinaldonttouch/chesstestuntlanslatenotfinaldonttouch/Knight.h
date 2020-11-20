#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "ClassChess.h"
#include"Board.h"


class Knight : public Piece
{
public:
    float KnPos;
    int Knnr;
    Knight(std::string color, float KnPos, int Knnr) : Piece(color) { this->KnPos = KnPos, this->Knnr = Knnr; }
};