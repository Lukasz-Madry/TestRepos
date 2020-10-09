#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int ile;
clock_t start, stop;
float czas;

int main()
{
    cout << "Ile liczb w tablicy: ";
    cin >> ile;

    //dynamiczna alokacja tablicy
    int* tablica;
    tablica = new int[ile];

    //zacznij odliczac czas
    start = clock();
    //wczytywanie liczb do tablicy
    for (int i = 0; i < ile; i++)
    {
        tablica[i] = i;
        tablica[i] += 50;
    }
    stop = clock();
    czas = (float)(stop - start) / CLOCKS_PER_SEC;
    cout << "Czas zapisu (bez wskaznika): " << czas << " s" << endl;

    delete[] tablica;

    //ponowna alokacja tablicy
    tablica = new int[ile];
    int* wskaznik = tablica;

    //zacznij odliczac czas
    start = clock();
    //wczytywanie liczb do tablicy
    for (int i = 0; i < ile; i++)
    {
        *wskaznik = i;
        *wskaznik += 50;
        wskaznik++;
    }
    stop = clock();
    czas = (float)(stop - start) / CLOCKS_PER_SEC;
    cout << "Czas zapisu (ze wskaznikiem): " << czas << " s";

    delete[] tablica;

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
