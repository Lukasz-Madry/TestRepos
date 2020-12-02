#pragma once
struct poz
{
	int x, y;
}oldPoz, regeleAlb, regeleNegru, transformA, transformN;
int  size = 100, move = 0, x, y;
int oldpx;
int turnAlbDreapta = 0, turnAlbStanga = 0, regeAlb = 0;
int turnNegruDreapta = 0, turnNegruStanga = 0, regeNegru = 0;


int mutare = 0;

int sahAlb = 0, sahNegru = 0;
int board[8][8] =
{ 2, 3, 4, 5, 6, 4, 3, 2,
  1, 1, 1, 1, 1, 1, 1, 1,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
 -1,-1,-1,-1,-1,-1,-1,-1,
 -2,-3,-4,-5,-6,-4,-3,-2, };