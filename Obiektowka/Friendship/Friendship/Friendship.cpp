
#include <iostream>
#include "friend.h"
using namespace std;

void sedzia(Punkt& pkt, Prostokat& p)
{
	p.nazwa = "PODMIANA";

	if ((pkt.x >= p.x) && (pkt.x <= p.x + p.szerokosc) && (pkt.y >= p.y) && (pkt.y <= p.y + p.wysokosc))

		cout << endl << "Punkt " << pkt.nazwa << " nalezy do prostokata: " << p.nazwa;

	else

		cout << endl << "Punkt " << pkt.nazwa << " lezy POZA prostokatem: " << p.nazwa;


}

int main()
{
    Punkt pkt1("A", 3, 17);
    //pkt1.wczytaj();

    Prostokat p1("Prostokat", 0, 0, 6, 4);
    //p1.wczytaj();

    sedzia(pkt1, p1);

    p1.wczytaj();

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
