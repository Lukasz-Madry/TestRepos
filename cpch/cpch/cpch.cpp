#include <SFML/Graphics.hpp>
#include <iostream>
#include "Pawn.h"
#include "Info.h"
#include "Rook.h"
#include "Bishop.h"
#include "Queen.h"
#include "Knight.h"
#include "King.h"
#include "WinCondition.h"

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

using namespace sf;

int transformareAlb = 0, transformareNegru = 0;


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

int main()
{
	RenderWindow window(VideoMode(800, 800), "Chess made by Silvian Achim");
	Texture t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15;

	t1.loadFromFile("images/board.png");
	t2.loadFromFile("images/PionNegru.png");
	t3.loadFromFile("images/PionAlb.png");
	t4.loadFromFile("images/TurnNegru.png");
	t5.loadFromFile("images/TurnAlb.png");
	t6.loadFromFile("images/CalAlb.png");
	t7.loadFromFile("images/CalNegru.png");
	t8.loadFromFile("images/NebunNegru.png");
	t9.loadFromFile("images/NebunAlb.png");
	t10.loadFromFile("images/ReginaAlb.png");
	t11.loadFromFile("images/ReginaNegru.png");
	t12.loadFromFile("images/RegeNegru.png");
	t13.loadFromFile("images/RegeAlb.png");
	t14.loadFromFile("images/TransformareAlb.png");
	t15.loadFromFile("images/TransformareNegru.png");

	Sprite tabla(t1);
	Sprite PionNegru(t2);
	Sprite PionAlb(t3);
	Sprite TurnNegru(t4);
	Sprite TurnAlb(t5);
	Sprite CalAlb(t6);
	Sprite CalNegru(t7);
	Sprite NebunNegru(t8);
	Sprite NebunAlb(t9);
	Sprite ReginaAlb(t10);
	Sprite ReginaNegru(t11);
	Sprite RegeNegru(t12);
	Sprite RegeAlb(t13);
	Sprite Mutare;
	Sprite TransformareALB(t14);
	Sprite TransformareNEGRU(t15);

	float dx = 0, dy = 0;
	int numarPiesaMutata = 0;

	while (window.isOpen())
	{
		Vector2i pos = Mouse::getPosition(window);
		x = pos.x / size;
		y = pos.y / size;
		Event e;
		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)
			{
				window.close();
			}
			window.clear();
			if (e.type == Event::MouseButtonPressed)
			{
				if (e.key.code == Mouse::Left)
				{
					
					if (transformareAlb == 1)
					{
						if (pos.y >= transformA.y * size && pos.y <= (transformA.y + 1) * size && pos.x >= transformA.x * size && pos.x <= (transformA.x + 1) * size)
						{
							int xx = pos.x % 100, yy = pos.y % 100;
							
							if (xx < 50 && yy < 50 && xx > 0 && yy > 0)
							{
								board[transformA.y][transformA.x] = TurnALB;
								transformareAlb = 0;
							}
							if (xx > 50 && xx < 100 && yy < 50 && yy > 0)
							{
								board[transformA.y][transformA.x] = ReginaALB;
								transformareAlb = 0;
							}
							if (xx > 50 && xx < 100 && yy>50 && yy < 100)
							{
								board[transformA.y][transformA.x] = CalALB;
								transformareAlb = 0;
							}
							if (xx < 50 && xx>0 && yy > 50 && y < 100)
							{
								board[transformA.y][transformA.x] = NebunALB;
								transformareAlb = 0;
							}
							if (transformareAlb == 0)
							{
								pozRegeNegru();
								int h = RegeNegruSahCheck(regeleNegru.x, regeleNegru.y);
								if (h == 0)
								{
									sahNegru = 1;
								}
							}
						}
					}
					if (transformareNegru == 1)
					{
						if (pos.y >= transformN.y * size && pos.y <= (transformN.y + 1) * size && pos.x >= transformN.x * size && pos.x <= (transformN.x + 1) * size)
						{
							int xx = pos.x % 100, yy = pos.y % 100;
							if (xx < 50 && yy < 50 && xx > 0 && yy > 0)
							{
								board[transformN.y][transformN.x] = TurnNEGRU;
								transformareNegru = 0;
							}
							if (xx > 50 && xx < 100 && yy < 50 && yy > 0)
							{
								board[transformN.y][transformN.x] = ReginaNEGRU;
								transformareNegru = 0;
							}
							if (xx > 50 && xx < 100 && yy>50 && yy < 100)
							{
								board[transformN.y][transformN.x] = CalNEGRU;
								transformareNegru = 0;
							}
							if (xx < 50 && xx>0 && yy > 50 && y < 100)
							{
								board[transformN.y][transformN.x] = NebunNEGRU;
								transformareNegru = 0;
							}
							if (transformareNegru == 0)
							{
								pozRegeAlb();
								int h = RegeAlbSahCheck(regeleAlb.x, regeleAlb.y);
								if (h == 0)
								{
									sahAlb = 1;
								}
							}
						}
					}
					
					if (board[y][x] != 0)
					{
						dx = pos.x - x * 100;
						dy = pos.y - y * 100;
						if (board[y][x] == PionNEGRU && mutare == 1)
						{
							numarPiesaMutata = PionNEGRU;
							Mutare = PionNegru;
							board[y][x] = 0;
						}
						if (board[y][x] == PionALB && mutare == 0)
						{
							numarPiesaMutata = PionALB;
							Mutare = PionAlb;
							board[y][x] = 0;
						}
						if (board[y][x] == TurnNEGRU && mutare == 1)
						{
							numarPiesaMutata = TurnNEGRU;
							Mutare = TurnNegru;
							board[y][x] = 0;

						}
						if (board[y][x] == TurnALB && mutare == 0)
						{
							numarPiesaMutata = TurnALB;
							Mutare = TurnAlb;
							board[y][x] = 0;

						}
						if (board[y][x] == CalALB && mutare == 0)
						{
							numarPiesaMutata = CalALB;
							Mutare = CalAlb;
							board[y][x] = 0;
						}
						if (board[y][x] == CalNEGRU && mutare == 1)
						{
							numarPiesaMutata = CalNEGRU;
							Mutare = CalNegru;
							board[y][x] = 0;
						}
						if (board[y][x] == NebunNEGRU && mutare == 1)
						{
							numarPiesaMutata = NebunNEGRU;
							Mutare = NebunNegru;
							board[y][x] = 0;
						}
						if (board[y][x] == NebunALB && mutare == 0)
						{
							numarPiesaMutata = NebunALB;
							Mutare = NebunAlb;
							board[y][x] = 0;
						}
						if (board[y][x] == ReginaALB && mutare == 0)
						{
							numarPiesaMutata = ReginaALB;
							Mutare = ReginaAlb;
							board[y][x] = 0;
						}
						if (board[y][x] == ReginaNEGRU && mutare == 1)
						{
							numarPiesaMutata = ReginaNEGRU;
							Mutare = ReginaNegru;
							board[y][x] = 0;
						}
						if (board[y][x] == RegeNEGRU && mutare == 1)
						{
							numarPiesaMutata = RegeNEGRU;
							Mutare = RegeNegru;
							board[y][x] = 0;
						}
						if (board[y][x] == RegeALB && mutare == 0)
						{
							numarPiesaMutata = RegeALB;
							Mutare = RegeAlb;
							board[y][x] = 0;
						}
						if (board[y][x] == 0)
						{
							move = 1;
							oldPoz.x = x;
							oldPoz.y = y;
						}
					}
				}
			}
			if (e.type == Event::MouseButtonReleased)
			{
				if (e.key.code == Mouse::Left)
				{
					int ok = 2;
					
					if (numarPiesaMutata == PionALB && move == 1)
					{
						ok = PionA(oldPoz.x, oldPoz.y, x, y);
					}
					if (numarPiesaMutata == PionNEGRU && move == 1)
					{
						ok = PionN(oldPoz.x, oldPoz.y, x, y);
					}
					
					if (numarPiesaMutata == TurnALB && move == 1)
					{
						ok = TurnA(oldPoz.x, oldPoz.y, x, y);
						if (ok == 1 && turnAlbStanga == 0 && oldPoz.y == 7 && oldPoz.x == 0)
						{
							turnAlbStanga = 1;
							//std::cout << turnAlbStanga << "\n";
						}
						if (ok == 1 && turnAlbDreapta == 0 && oldPoz.y == 7 && oldPoz.x == 7)
						{
							turnAlbDreapta = 1;
							//std::cout << turnAlbDreapta << "\n";
						}
					}
					if (numarPiesaMutata == TurnNEGRU && move == 1)
					{
						ok = TurnN(oldPoz.x, oldPoz.y, x, y);
						if (ok == 1 && turnNegruDreapta == 0 && oldPoz.y == 0 && oldPoz.x == 7)
						{
							turnNegruDreapta = 1;
							//std::cout << turnNegruDreapta<< "\n";
						}
						if (ok == 1 && turnNegruStanga == 0 && oldPoz.y == 0 && oldPoz.x == 0)
						{
							turnNegruStanga = 1;
							//std::cout << turnNegruStanga << "\n";
						}
					}
					
					if (numarPiesaMutata == NebunALB && move == 1)
					{
						ok = NebunA(oldPoz.x, oldPoz.y, x, y);
					}
					if (numarPiesaMutata == NebunNEGRU && move == 1)
					{
						ok = NebunN(oldPoz.x, oldPoz.y, x, y);
					}
					
					if (numarPiesaMutata == ReginaALB && move == 1)
					{
						ok = ReginaA(oldPoz.x, oldPoz.y, x, y);
					}
					if (numarPiesaMutata == ReginaNEGRU && move == 1)
					{
						ok = ReginaN(oldPoz.x, oldPoz.y, x, y);
					}
					
					if (numarPiesaMutata == CalALB && move == 1)
					{
						ok = CalA(oldPoz.x, oldPoz.y, x, y);
					}
					if (numarPiesaMutata == CalNEGRU && move == 1)
					{
						ok = CalN(oldPoz.x, oldPoz.y, x, y);
					}
					/*
					if (numarPiesaMutata == RegeNEGRU && move == 1)
					{
						ok = RegeN(oldPoz.x, oldPoz.y, x, y);
						if (ok == 1 && regeNegru == 0)
						{
							regeNegru = 1;
							//	std::cout << regeNegru << "\n";
						}
					}
					if (numarPiesaMutata == RegeALB && move == 1)
					{
						ok = RegeA(oldPoz.x, oldPoz.y, x, y);
						if (ok == 1 && regeAlb == 0)
						{
							regeAlb = 1;
							//std::cout << "primaMutareREGEalb=" << regeAlb << "\n";
						}
					}*/
					if (ok == 1)
					{
						int nr = board[y][x];
						board[y][x] = numarPiesaMutata;

						if (y == 0 && numarPiesaMutata == PionALB)
						{
							transformareAlb = 1;
							transformA.x = x;
							transformA.y = y;
							board[y][x] = 0;
						}
						if (y == 7 && numarPiesaMutata == PionNEGRU)
						{
							transformareNegru = 1;
							transformN.x = x;
							transformN.y = y;
							board[y][x] = 0;
						}
						
						

						if (mutare == 0) // albul a mutat si urmeaza negrul
						{
							if (sahAlb == 1)
							{
								pozRegeAlb();
								int s = RegeAlbSahCheck(regeleAlb.x, regeleAlb.y);
								if (s == 0)
								{
									board[oldPoz.y][oldPoz.x] = numarPiesaMutata;
									board[y][x] = nr;
								}
								else
								{
									sahAlb = 0;
									pozRegeNegru();
									int sah = RegeNegruSahCheck(regeleNegru.x, regeleNegru.y);
									if (sah == 0)
									{
										sahNegru = 1;
									}
									mutare = 1;
								}
							}
							else
							{
								pozRegeAlb();
								int sa = RegeAlbSahCheck(regeleAlb.x, regeleAlb.y);
								if (sa == 0)
								{
									board[oldPoz.y][oldPoz.x] = numarPiesaMutata;
									board[y][x] = nr;
								}
								else
								{
									pozRegeNegru();
									int sah = RegeNegruSahCheck(regeleNegru.x, regeleNegru.y);
									if (sah == 0)
									{
										sahNegru = 1;
									}
									mutare = 1;
								}
							}
						}
						else // negrul a mutat si urmeaza albul
						{
							if (sahNegru == 1)
							{
								pozRegeNegru();
								int s = RegeNegruSahCheck(regeleNegru.x, regeleNegru.y);
								if (s == 0)
								{
									board[oldPoz.y][oldPoz.x] = numarPiesaMutata;
									board[y][x] = nr;
								}
								else
								{
									sahNegru = 0;
									pozRegeAlb();
									int sah = RegeAlbSahCheck(regeleAlb.x, regeleAlb.y);
									if (sah == 0)
									{
										sahAlb = 1;
									}
									mutare = 0;
								}
							}
							else
							{
								pozRegeNegru();
								int sa = RegeNegruSahCheck(regeleNegru.x, regeleNegru.y);
								if (sa == 0)
								{
									board[oldPoz.y][oldPoz.x] = numarPiesaMutata;
									board[y][x] = nr;
								}
								else
								{
									pozRegeAlb();
									int sah = RegeAlbSahCheck(regeleAlb.x, regeleAlb.y);
									if (sah == 0)
									{
										sahAlb = 1;
									}
									mutare = 0;
								}
							}
						}
					}
					else if (ok == 0)
					{
						board[oldPoz.y][oldPoz.x] = numarPiesaMutata;
					}
					move = 0;
				}
			}
		}
		// afisare //
		window.clear();
		window.draw(tabla);
		
		
		if (transformareAlb == 1)
		{
			TransformareALB.setPosition(transformA.x * size, transformA.y * size);
			window.draw(TransformareALB);
		}
		if (transformareNegru == 1)
		{
			TransformareNEGRU.setPosition(transformN.x * size, transformN.y * size);
			window.draw(TransformareNEGRU);
		}
		


		if (move == 1)
		{
			Mutare.setPosition(pos.x - dx, pos.y - dy);
			window.draw(Mutare);
		}
		for (int i = 0; i < LUNGIME; i++)
		{
			for (int j = 0; j < LUNGIME; j++)
			{

				if (board[i][j] != 0)
				{
					
					if (board[i][j] == PionNEGRU)
					{
						PionNegru.setPosition(j * size, i * size);
						window.draw(PionNegru);
					}
					if (board[i][j] == PionALB)
					{
						PionAlb.setPosition(j * size, i * size);
						window.draw(PionAlb);
					}
					if (board[i][j] == TurnNEGRU)
					{
						TurnNegru.setPosition(j * size, i * size);
						window.draw(TurnNegru);

					}
					if (board[i][j] == TurnALB)
					{
						TurnAlb.setPosition(j * size, i * size);
						window.draw(TurnAlb);

					}
					if (board[i][j] == CalALB)
					{
						CalAlb.setPosition(j * size, i * size);
						window.draw(CalAlb);
					}
					if (board[i][j] == CalNEGRU)
					{
						CalNegru.setPosition(j * size, i * size);
						window.draw(CalNegru);
					}
					if (board[i][j] == NebunNEGRU)
					{
						NebunNegru.setPosition(j * size, i * size);
						window.draw(NebunNegru);
					}
					if (board[i][j] == NebunALB)
					{
						NebunAlb.setPosition(j * size, i * size);
						window.draw(NebunAlb);
					}
					if (board[i][j] == ReginaALB)
					{
						ReginaAlb.setPosition(j * size, i * size);
						window.draw(ReginaAlb);
					}
					if (board[i][j] == ReginaNEGRU)
					{
						ReginaNegru.setPosition(j * size, i * size);
						window.draw(ReginaNegru);
					}
					if (board[i][j] == RegeNEGRU)
					{
						RegeNegru.setPosition(j * size, i * size);
						window.draw(RegeNegru);
					}
					if (board[i][j] == RegeALB)
					{
						RegeAlb.setPosition(j * size, i * size);
						window.draw(RegeAlb);
					}
					
				}
			}
		}
		window.display();
	}
	return 0;
}