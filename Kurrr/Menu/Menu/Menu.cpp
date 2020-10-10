#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

float x, y;
char wybor;

int main()
{

    for (;;)
    {

        cout << "Podaj 1 liczbe: ";
        cin >> x;
        cout << "Podaj 2 liczbe: ";
        cin >> y;

        cout << endl;
        cout << "MENU GLOWNE" << endl;
        cout << "-----------------" << endl;
        cout << "1. Dodawanie" << endl;
        cout << "2. Odejmowanie" << endl;
        cout << "3. Mnozenie" << endl;
        cout << "4. Dzielenie" << endl;
        cout << "5. Koniec programu" << endl;


        cout << endl;
        wybor = _getch();

        switch (wybor)
        {
        case '1':
            cout << "Suma = " << x + y;
            break;

        case '2':
            cout << "Roznica = " << x - y;
            break;

        case '3':
            cout << "Iloczyn = " << x * y;
            break;

        case '4':
            if (y == 0) cout << "Nie dzielimy przez zero!";
            else cout << "Iloraz = " << x / y;
            break;

        case '5':
            exit(0);
            break;

        default: cout << "Nie ma takiej opcji w menu!";
        }
        getchar(); getchar();
        system("cls");
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
