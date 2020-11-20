#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "ClassChess.h"

#include"Pawn.h"
#include"Knight.h"
#include"Bishop.h"
#include"Rook.h"
#include"Queen.h"
#include"King.h"

class Board
{
public:
    Piece*** board;
    void Start();
    void PerformMove();
    void Show();
    Board();
    void GameStart();
    int size = 100;
    int move = 0;
    int x, y;
    int boardcells[8][8] =
    { 2, 3, 4, 5, 6, 4, 3, 2,
    1, 1, 1, 1, 1, 1, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1,-1,-1,-1,-1,-1,-1,-1,
    -2,-3,-4,-5,-6,-4,-3,-2,};

};