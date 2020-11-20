#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "ClassChess.h"
#include"Board.h"

class Pawn : public Piece
{
public:
    int PawnNr;
    float PawnPos;
    Pawn(std::string color, int PawnNr, float PawnPos) : Piece(color) { this->PawnNr = PawnNr, this->PawnPos = PawnPos; }
};