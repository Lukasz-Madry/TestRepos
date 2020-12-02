#pragma once
#include "Info.h"
#define LUNGIME 8
int CalA(int ox, int oy, int nx, int ny)
{
	if (oy - 2 >= 0 && ox - 1 >= 0 && ny == oy - 2 && nx == ox - 1 && board[ny][nx] >= 0)
	{
		return 1; // stanga sus
	}
	if (oy - 2 >= 0 && ox + 1 < LUNGIME && ny == oy - 2 && nx == ox + 1 && board[ny][nx] >= 0)
	{
		return 1; // dreapta sus
	}
	if (oy - 1 >= 0 && ox + 2 < LUNGIME && ny == oy - 1 && nx == ox + 2 && board[ny][nx] >= 0)
	{
		return 1; // dreapta 1
	}
	if (oy + 1 >= 0 && ox + 2 < LUNGIME && ny == oy + 1 && nx == ox + 2 && board[ny][nx] >= 0)
	{
		return 1; // dreapta 2
	}
	if (oy + 2 < LUNGIME && ox + 1 < LUNGIME && ny == oy + 2 && nx == ox + 1 && board[ny][nx] >= 0)
	{
		return 1; // jos 1
	}
	if (oy + 2 < LUNGIME && ox - 1 >= 0 && ny == oy + 2 && nx == ox - 1 && board[ny][nx] >= 0)
	{
		return 1; //jos 2
	}
	if (oy + 1 < LUNGIME && ox - 2 >= 0 && ny == oy + 1 && nx == ox - 2 && board[ny][nx] >= 0)
	{
		return 1; // stanga 1
	}
	if (oy - 1 >= 0 && ox - 2 >= 0 && ny == oy - 1 && nx == ox - 2 && board[ny][nx] >= 0)
	{
		return 1;
	}
	return 0;
}

int CalN(int ox, int oy, int nx, int ny)
{
	if (oy - 2 >= 0 && ox - 1 >= 0 && ny == oy - 2 && nx == ox - 1 && board[ny][nx] <= 0)
	{
		return 1; // stanga sus
	}
	if (oy - 2 >= 0 && ox + 1 < LUNGIME && ny == oy - 2 && nx == ox + 1 && board[ny][nx] <= 0)
	{
		return 1; // dreapta sus
	}
	if (oy - 1 >= 0 && ox + 2 < LUNGIME && ny == oy - 1 && nx == ox + 2 && board[ny][nx] <= 0)
	{
		return 1; // dreapta 1
	}
	if (oy + 1 >= 0 && ox + 2 < LUNGIME && ny == oy + 1 && nx == ox + 2 && board[ny][nx] <= 0)
	{
		return 1; // dreapta 2
	}
	if (oy + 2 < LUNGIME && ox + 1 < LUNGIME && ny == oy + 2 && nx == ox + 1 && board[ny][nx] <= 0)
	{
		return 1; // jos 1
	}
	if (oy + 2 < LUNGIME && ox - 1 >= 0 && ny == oy + 2 && nx == ox - 1 && board[ny][nx] <= 0)
	{
		return 1; //jos 2
	}
	if (oy + 1 < LUNGIME && ox - 2 >= 0 && ny == oy + 1 && nx == ox - 2 && board[ny][nx] <= 0)
	{
		return 1; // stanga 1
	}
	if (oy - 1 >= 0 && ox - 2 >= 0 && ny == oy - 1 && nx == ox - 2 && board[ny][nx] <= 0)
	{
		return 1;
	}
	return 0;
}

int CalASah(int ox, int oy, int regex, int regey)
{
	if (oy - 2 >= 0 && ox - 1 >= 0 && regey == oy - 2 && regex == ox - 1 && board[regey][regex] >= 0)
	{
		return 1; // stanga sus
	}
	if (oy - 2 >= 0 && ox + 1 < LUNGIME && regey == oy - 2 && regex == ox + 1 && board[regey][regex] >= 0)
	{
		return 1; // dreapta sus
	}
	if (oy - 1 >= 0 && ox + 2 < LUNGIME && regey == oy - 1 && regex == ox + 2 && board[regey][regex] >= 0)
	{
		return 1; // dreapta 1
	}
	if (oy + 1 >= 0 && ox + 2 < LUNGIME && regey == oy + 1 && regex == ox + 2 && board[regey][regex] >= 0)
	{
		return 1; // dreapta 2
	}
	if (oy + 2 < LUNGIME && ox + 1 < LUNGIME && regey == oy + 2 && regex == ox + 1 && board[regey][regex] >= 0)
	{
		return 1; // jos 1
	}
	if (oy + 2 < LUNGIME && ox - 1 >= 0 && regey == oy + 2 && regex == ox - 1 && board[regey][regex] >= 0)
	{
		return 1; //jos 2
	}
	if (oy + 1 < LUNGIME && ox - 2 >= 0 && regey == oy + 1 && regex == ox - 2 && board[regey][regex] >= 0)
	{
		return 1; // stanga 1
	}
	if (oy - 1 >= 0 && ox - 2 >= 0 && regey == oy - 1 && regex == ox - 2 && board[regey][regex] >= 0)
	{
		return 1;
	}
	return 0;
}

int CalNSah(int ox, int oy, int regex, int regey)
{
	if (oy - 2 >= 0 && ox - 1 >= 0 && regey == oy - 2 && regex == ox - 1 && board[regey][regex] <= 0)
	{
		return 1; // stanga sus
	}
	if (oy - 2 >= 0 && ox + 1 < LUNGIME && regey == oy - 2 && regex == ox + 1 && board[regey][regex] <= 0)
	{
		return 1; // dreapta sus
	}
	if (oy - 1 >= 0 && ox + 2 < LUNGIME && regey == oy - 1 && regex == ox + 2 && board[regey][regex] <= 0)
	{
		return 1; // dreapta 1
	}
	if (oy + 1 >= 0 && ox + 2 < LUNGIME && regey == oy + 1 && regex == ox + 2 && board[regey][regex] <= 0)
	{
		return 1; // dreapta 2
	}
	if (oy + 2 < LUNGIME && ox + 1 < LUNGIME && regey == oy + 2 && regex == ox + 1 && board[regey][regex] <= 0)
	{
		return 1; // jos 1
	}
	if (oy + 2 < LUNGIME && ox - 1 >= 0 && regey == oy + 2 && regex == ox - 1 && board[regey][regex] <= 0)
	{
		return 1; //jos 2
	}
	if (oy + 1 < LUNGIME && ox - 2 >= 0 && regey == oy + 1 && regex == ox - 2 && board[regey][regex] <= 0)
	{
		return 1; // stanga 1
	}
	if (oy - 1 >= 0 && ox - 2 >= 0 && regey == oy - 1 && regex == ox - 2 && board[regey][regex] <= 0)
	{
		return 1;
	}
	return 0;
}