#pragma once
#include "Info.h"


#define LUNGIME 8
#define PionNEGRU 1
#define PionALB -1
#define TurnNEGRU 2
#define TurnALB -2
#define CalALB -3
#define CalNEGRU 3
#define NebunNEGRU 4
#define NebunALB -4
#define ReginaALB -5
#define ReginaNEGRU 5
#define RegeNEGRU 6
#define RegeALB -6

int RegeNegruSahCheck(int posRegex, int posRegey)
{
	int ok = 0;
	for (int i = 0; i < LUNGIME; i++)
	{
		for (int j = 0; j < LUNGIME; j++)
		{
			if (board[i][j] < 0)
			{
				if (board[i][j] == PionALB)
				{
					ok = PionASah(j, i, posRegex, posRegey);
				}
				if (board[i][j] == TurnALB)
				{
					ok = TurnASah(j, i, posRegex, posRegey);
				}
				if (board[i][j] == CalALB)
				{
					ok = CalASah(j, i, posRegex, posRegey);
				}
				if (board[i][j] == NebunALB)
				{
					ok = NebunASah(j, i, posRegex, posRegey);
				}
				if (board[i][j] == ReginaALB)
				{
					ok = ReginaASah(j, i, posRegex, posRegey);
				}
				if (board[i][j] == RegeALB)
				{
					ok = RegeASah(j, i, posRegex, posRegey);
				}
				if (ok == 1)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}


int RegeAlbSahCheck(int posRegex, int posRegey)
{
	int ok = 0;
	for (int i = 0; i < LUNGIME; i++)
	{
		for (int j = 0; j < LUNGIME; j++)
		{
			if (board[i][j] > 0)
			{
				if (board[i][j] == PionNEGRU)
				{
					ok = PionNSah(j, i, posRegex, posRegey);
				}
				if (board[i][j] == TurnNEGRU)
				{
					ok = TurnNSah(j, i, posRegex, posRegey);
				}
				if (board[i][j] == CalNEGRU)
				{
					ok = CalNSah(j, i, posRegex, posRegey);
				}
				if (board[i][j] == NebunNEGRU)
				{
					ok = NebunNSah(j, i, posRegex, posRegey);
				}
				if (board[i][j] == ReginaNEGRU)
				{
					ok = ReginaNSah(j, i, posRegex, posRegey);
				}
				if (board[i][j] == RegeNEGRU)
				{
					ok = RegeNSah(j, i, posRegex, posRegey);
				}
				if (ok == 1)
				{
					//	std::cout << "da" << "\n";
					return 0;
				}
			}
		}
	}
	return 1;
}
