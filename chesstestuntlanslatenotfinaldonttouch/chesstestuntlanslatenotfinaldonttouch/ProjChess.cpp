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
#include"Board.h"
#include <SFML/Graphics.hpp>


using namespace sf;


int size = 100;
int perfMove, move;
int k = 2;
int main() {
   
float px = 0;
float py = 0;
int mpn=0; //number of piece I'm moving

    ///SFML inclusion
    RenderWindow window(VideoMode(800, 800), "Chess game");
    Texture s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13;
    s1.loadFromFile("images/board.png");
    s2.loadFromFile("images/bpawn.png");
    s3.loadFromFile("images/wpawn.png");
    s4.loadFromFile("images/brook.png");
    s5.loadFromFile("images/wrook.png");
    s6.loadFromFile("images/bknight.png");
    s7.loadFromFile("images/wknight.png");
    s8.loadFromFile("images/bbish.png");
    s9.loadFromFile("images/wbishop.png");
    s10.loadFromFile("images/bqueen.png");
    s11.loadFromFile("images/wqueen.png");
    s12.loadFromFile("images/bking.png");
    s13.loadFromFile("images/wking.png");
    Sprite b(s1);
    Sprite bpawn(s2);
    Sprite wpawn(s3);
    Sprite brook(s4);
    Sprite wrook(s5);
    Sprite bknight(s6);
    Sprite wknight(s7);
    Sprite bbish(s8);
    Sprite wbishop(s9);
    Sprite bqueen(s10);
    Sprite wqueen(s11);
    Sprite bking(s12);
    Sprite wking(s13);
    Sprite MIMG;
   
    int boardcells[8][8]=
    { 2, 3, 4, 5, 6, 4, 3, 2,
      1, 1, 1, 1, 1, 1, 1, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1,-1,-1,-1,-1,-1,-1,-1,
    -2,-3,-4,-5,-6,-4,-3,-2,
    };

    while (window.isOpen())
    {   Vector2i pos = Mouse::getPosition(window);
        int x = pos.x / size;
        int y = pos.y / size;
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
       
      
        if (event.type == Event::MouseButtonPressed)
        {

            if (event.key.code == Mouse::Left)
            {
                if (boardcells[y][x] != 0)
                {
                    px = pos.x - x * 100;
                    py = pos.y - y * 100;
                }
            }
        }

        if (event.type == Event::MouseButtonReleased)
        {
            if (event.key.code == Mouse::Left)
            {

            }
        }  
        
        window.draw(b);
        window.draw(bpawn);
        window.draw(wpawn);
        window.draw(brook);
        window.draw(wrook);
        window.draw(bknight);
        window.draw(wknight);
        window.draw(bbish);
        window.draw(wbishop);
        window.draw(bqueen);
        window.draw(wqueen);
        window.draw(bking);
        window.draw(wking);
        window.display();
    }
    return 0;
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
