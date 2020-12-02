#include "Info.h"

int PionA(int ox, int oy, int nx, int ny)
{
	if (oldPoz.y == 6)
	{
		if ((ny == oy - 1 && nx == ox && board[oy - 1][ox] == 0) || (ny == oy - 2 && nx == ox && board[oy - 1][ox] == 0 && board[oy - 2][ox] == 0))
		{
			return 1;
		}
	}
	else if (ny == oy - 1 && nx == ox && board[oy - 1][ox] == 0)
	{
		return 1;
	}
	if (board[oy - 1][ox - 1] > 0)
	{
		if (ny == oy - 1 && nx == ox - 1)
		{
			return 1;
		}
	}
	if (board[oy - 1][ox + 1] > 0)
	{
		if (ny == oy - 1 && nx == ox + 1)
		{
			return 1;
		}
	}
	return 0;
}

int PionN(int ox, int oy, int nx, int ny)
{
	if (oldPoz.y == 1)
	{
		if ((ny == oy + 1 && nx == ox && board[oy + 1][ox] == 0) || (ny == oy + 2 && nx == ox && board[oy + 1][ox] == 0 && board[oy + 2][ox] == 0))
		{
			return 1;
		}
	}
	else if (ny == oy + 1 && nx == ox && board[oy + 1][ox] == 0)
	{
		return 1;
	}
	if (board[oy + 1][ox - 1] < 0)
	{
		if (ny == oy + 1 && nx == ox - 1)
		{
			return 1;
		}
	}
	if (board[oy + 1][ox + 1] < 0)
	{
		if (ny == oy + 1 && nx == ox + 1)
		{
			return 1;
		}
	}
	return 0;
}


int PionASah(int posx, int posy, int regex, int regey)
{
	//std::cout << "ox=" << posx << " oy=" << posy << " regex=" << regex << " regey=" << regey << "\n\n\n";
	if (board[posy - 1][posx - 1] >= 0)
	{
		if (posy - 1 == regey && posx - 1 == regex)
		{
			return 1;
		}
	}
	if (board[posy - 1][posx + 1] >= 0)
	{
		//std::cout << "da";
		if (posy - 1 == regey && posx + 1 == regex)
		{
			return 1;
		}
	}
	return 0;
}

int PionNSah(int ox, int oy, int regex, int regey)
{
	if (board[oy + 1][ox - 1] <= 0)
	{
		if (regey == oy + 1 && regex == ox - 1)
		{
			return 1;
		}
	}
	if (board[oy + 1][ox + 1] <= 0)
	{
		if (regey == oy + 1 && regex == ox + 1)
		{
			return 1;
		}
	}
	return 0;
}
