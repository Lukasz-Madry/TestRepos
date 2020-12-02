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
int RegeASah(int ox, int oy, int regex, int regey)
{
	if (ox - 1 >= 0 && oy - 1 >= 0 && regey == oy - 1 && regex == ox - 1 && board[regey][regex] <= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && regex == ox && regey == oy - 1 && board[regey][regex] <= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && ox + 1 < LUNGIME && regex == ox + 1 && regey == oy - 1 && board[regey][regex] <= 0)
	{
		return 1;
	}
	if (ox + 1 < LUNGIME && regey == oy && regex == ox + 1 && board[regey][regex] <= 0)
	{
		return 1;
	}
	if (ox + 1 < LUNGIME && oy + 1 < LUNGIME && regey == oy + 1 && regex == ox + 1 && board[regey][regex] <= 0)
	{
		return 1;
	}
	if (oy + 1 < LUNGIME && regey == oy + 1 && regex == ox && board[regey][regex] <= 0)
	{
		return 1;
	}
	if (ox - 1 >= 0 && oy + 1 < LUNGIME && regex == ox - 1 && regey == oy + 1 && board[regey][regex] <= 0)
	{
		return 1;
	}
	if (ox - 1 >= 0 && regey == oy && regex == ox - 1 && board[regey][regex] <= 0)
	{
		return 1;
	}
	return 0;
}

int RegeNSah(int ox, int oy, int regex, int regey)
{
	if (ox - 1 >= 0 && oy - 1 >= 0 && regey == oy - 1 && regex == ox - 1 && board[regey][regex] >= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && regex == ox && regey == oy - 1 && board[regey][regex] >= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && ox + 1 < LUNGIME && regex == ox + 1 && regey == oy - 1 && board[regey][regex] >= 0)
	{
		return 1;
	}
	if (ox + 1 < LUNGIME && regey == oy && regex == ox + 1 && board[regey][regex] >= 0)
	{
		return 1;
	}
	if (ox + 1 < LUNGIME && oy + 1 < LUNGIME && regey == oy + 1 && regex == ox + 1 && board[regey][regex] >= 0)
	{
		return 1;
	}
	if (oy + 1 < LUNGIME && regey == oy + 1 && regex == ox && board[regey][regex] >= 0)
	{
		return 1;
	}
	if (ox - 1 >= 0 && oy + 1 < LUNGIME && regex == ox - 1 && regey == oy + 1 && board[regey][regex] >= 0)
	{
		return 1;
	}
	if (ox - 1 >= 0 && regey == oy && regex == ox - 1 && board[regey][regex] >= 0)
	{
		return 1;
	}
	return 0;
}
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


int RegeA(int ox, int oy, int nx, int ny)
{
	if (ox - 1 >= 0 && oy - 1 >= 0 && ny == oy - 1 && nx == ox - 1 && board[ny][nx] >= 0)
	{
		int ok = RegeAlbSahCheck(ox - 1, oy - 1);
		if (ok == 1)
		{
			return 1;  // stanga sus
		}
	}
	if (oy - 1 >= 0 && nx == ox && ny == oy - 1 && board[ny][nx] >= 0)
	{
		int ok = RegeAlbSahCheck(ox, oy - 1);
		if (ok == 1)
		{
			return 1; // sus
		}
	}
	if (oy - 1 >= 0 && ox + 1 < LUNGIME && nx == ox + 1 && ny == oy - 1 && board[ny][nx] >= 0)
	{
		int ok = RegeAlbSahCheck(ox + 1, oy - 1);
		if (ok == 1)
		{
			return 1; // dreapta sus
		}
	}
	if (ox + 1 < LUNGIME && ny == oy && nx == ox + 1 && board[ny][nx] >= 0)
	{
		int ok = RegeAlbSahCheck(ox + 1, oy);
		if (ok == 1)
		{
			return 1; // dreapta
		}
	}
	if (ox + 1 < LUNGIME && oy + 1 < LUNGIME && ny == oy + 1 && nx == ox + 1 && board[ny][nx] >= 0)
	{
		int ok = RegeAlbSahCheck(ox + 1, oy + 1);
		if (ok == 1)
		{
			return 1; // dreapta jos
		}
	}
	if (oy + 1 < LUNGIME && ny == oy + 1 && nx == ox && board[ny][nx] >= 0)
	{
		int ok = RegeAlbSahCheck(ox, oy + 1);
		if (ok == 1)
		{
			return 1; // jos
		}
	}
	if (ox - 1 >= 0 && oy + 1 < LUNGIME && nx == ox - 1 && ny == oy + 1 && board[ny][nx] >= 0)
	{
		int ok = RegeAlbSahCheck(ox - 1, oy + 1);
		if (ok == 1)
		{
			return 1; // stanga jos
		}
	}
	if (ox - 1 >= 0 && ny == oy && nx == ox - 1 && board[ny][nx] >= 0)
	{
		int ok = RegeAlbSahCheck(ox - 1, oy);
		if (ok == 1)
		{
			return 1; // stanga
		}
	}
	// rocada in dreapta
	if (regeAlb == 0 && turnAlbDreapta == 0 && board[7][5] == 0 && board[7][6] == 0 && ny == 7 && nx == 6)
	{
		int ok = 1;
		ok = RegeAlbSahCheck(4, 7);
		if (ok == 1)
		{
			ok = RegeAlbSahCheck(5, 7);
			if (ok == 1)
			{
				ok = RegeAlbSahCheck(6, 7);
				if (ok == 1)
				{
					board[7][7] = 0;
					board[7][5] = TurnALB;
					regeAlb = 1;
					turnAlbDreapta = 1;
					return 1;
				}
			}
		}
	}
	// rocada in stanga
	if (regeAlb == 0 && turnAlbDreapta == 0 && board[7][3] == 0 && board[7][2] == 0 && board[7][1] == 0 && ny == 7 && nx == 2)
	{
		int ok = 1;
		ok = RegeAlbSahCheck(4, 7);
		if (ok == 1)
		{
			ok = RegeAlbSahCheck(3, 7);
			if (ok == 1)
			{
				ok = RegeAlbSahCheck(2, 7);
				if (ok == 1)
				{
					ok = RegeAlbSahCheck(1, 7);
					if (ok == 1)
					{
						board[7][0] = 0;
						board[7][3] = TurnALB;
						regeAlb = 1;
						turnAlbStanga = 1;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int RegeN(int ox, int oy, int nx, int ny)
{
	if (ox - 1 >= 0 && oy - 1 >= 0 && ny == oy - 1 && nx == ox - 1 && board[ny][nx] <= 0)
	{
		int ok = RegeNegruSahCheck(ox - 1, oy - 1);
		if (ok == 1)
		{
			return 1;  // stanga sus
		}
	}
	if (oy - 1 >= 0 && nx == ox && ny == oy - 1 && board[ny][nx] <= 0)
	{
		int ok = RegeNegruSahCheck(ox, oy - 1);
		if (ok == 1)
		{
			return 1; // sus
		}
	}
	if (oy - 1 >= 0 && ox + 1 < LUNGIME && nx == ox + 1 && ny == oy - 1 && board[ny][nx] <= 0)
	{
		int ok = RegeNegruSahCheck(ox + 1, oy - 1);
		if (ok == 1)
		{
			return 1; // dreapta sus
		}
	}
	if (ox + 1 < LUNGIME && ny == oy && nx == ox + 1 && board[ny][nx] <= 0)
	{
		int ok = RegeNegruSahCheck(ox + 1, oy);
		if (ok == 1)
		{
			return 1; // dreapta
		}
	}
	if (ox + 1 < LUNGIME && oy + 1 < LUNGIME && ny == oy + 1 && nx == ox + 1 && board[ny][nx] <= 0)
	{
		int ok = RegeNegruSahCheck(ox + 1, oy + 1);
		if (ok == 1)
		{
			return 1; // dreapta jos
		}
	}
	if (oy + 1 < LUNGIME && ny == oy + 1 && nx == ox && board[ny][nx] <= 0)
	{
		int ok = RegeNegruSahCheck(ox, oy + 1);
		if (ok == 1)
		{
			return 1; // jos
		}
	}
	if (ox - 1 >= 0 && oy + 1 < LUNGIME && nx == ox - 1 && ny == oy + 1 && board[ny][nx] <= 0)
	{
		int ok = RegeNegruSahCheck(ox - 1, oy + 1);
		if (ok == 1)
		{
			return 1; // stanga jos
		}
	}
	if (ox - 1 >= 0 && ny == oy && nx == ox - 1 && board[ny][nx] <= 0)
	{
		int ok = RegeNegruSahCheck(ox - 1, oy);
		if (ok == 1)
		{
			return 1; // stanga
		}
	}
	// rocada in dreapta
	if (turnNegruDreapta == 0 && regeNegru == 0 && board[0][5] == 0 && board[0][6] == 0 && ny == 0 && nx == 6)
	{
		int ok = RegeNegruSahCheck(4, 0);
		if (ok == 1)
		{
			ok = RegeNegruSahCheck(5, 0);
			if (ok == 1)
			{
				ok = RegeNegruSahCheck(6, 0);
				if (ok == 1)
				{
					regeNegru = 1;
					turnNegruDreapta = 1;
					board[0][7] = 0;
					board[0][5] = TurnNEGRU;
					return 1;
				}
			}
		}
	}
	if (turnNegruStanga == 0 && regeNegru == 0 && board[0][3] == 0 && board[0][2] == 0 && board[0][1] == 0 && ny == 0 && nx == 2)
	{
		int ok = RegeNegruSahCheck(4, 0);
		if (ok == 1)
		{
			ok = RegeNegruSahCheck(3, 0);
			if (ok == 1)
			{
				ok = RegeNegruSahCheck(2, 0);
				if (ok == 1)
				{
					ok = RegeNegruSahCheck(1, 0);
					if (ok == 1)
					{
						regeNegru = 1;
						turnNegruStanga = 1;
						board[0][0] = 0;
						board[0][3] = TurnNEGRU;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}


void pozRegeAlb()
{
	for (int i = 0; i < LUNGIME; i++)
	{
		for (int j = 0; j < LUNGIME; j++)
		{
			if (board[i][j] == RegeALB)
			{
				regeleAlb.x = j;
				regeleAlb.y = i;
				break;
			}
		}
	}
}

void pozRegeNegru()
{
	for (int i = 0; i < LUNGIME; i++)
	{
		for (int j = 0; j < LUNGIME; j++)
		{
			if (board[i][j] == RegeNEGRU)
			{
				regeleNegru.y = i;
				regeleNegru.x = j;
				break;
			}
		}
	}
}






