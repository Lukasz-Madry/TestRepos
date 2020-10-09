// Wskazniki3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

float srednia(float* tab, int ile)
{

	float suma = 0;
	for (int i = 0; i < ile; i++)
	{

		suma += *tab;
		*tab = 999;
		tab++;
	}
	return suma / ile;

}

int main()
{
	float tablica[3];
	tablica[0] = 1.5;
	tablica[1] = 2.3;
	tablica[2] = 0.75;
	cout << srednia(tablica, 3) << endl;
	cout << tablica[0] << endl;
	cout << tablica[1] << endl;
	cout << tablica[2] << endl;

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
