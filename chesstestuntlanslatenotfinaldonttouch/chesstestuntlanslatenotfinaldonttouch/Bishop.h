#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "ClassChess.h"
#include"Board.h"
class Bishop : public Piece
{
public:
    float BPos;
    int Bnr;
    Bishop(std::string color, float BPos, int Bnr) : Piece(color) { this->BPos = BPos, this->Bnr = Bnr; }

};