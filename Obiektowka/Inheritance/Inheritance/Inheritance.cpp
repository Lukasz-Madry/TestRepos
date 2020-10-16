// Inheritance.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include<math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
using namespace std;

class Punkt
{
    float x, y;
    string nazwa;
public:
    void wyswietl()
    {
        cout << x << y;
    }
    Punkt(string n="S", float a=0, float b=0)
    {
        nazwa = n;
        x = a;
        y = b;

    }
};

class Kolo :public Punkt
{   string nazwa;
    protected:    
    float r; 
    
public:
    void wyswietl()
    {
        cout << nazwa<< endl;
        Punkt::wyswietl();
        cout << r << endl;
        cout << M_PI * r * r << endl;
        
    }
    Kolo(string nk="Kolko" , string np="S" , float a=0, float b=0, float pr=1)
    :Punkt(np,a,b)
    {
        nazwa = nk;
        r = pr;
    }
};

class Kula :public Kolo
{
    string nazwa;
public:
    
    void wyswietl()
    {
        cout << 4.0 / 3.0 * M_PI * r * r * r << endl;
    }
    Kula(string nkk = "Kolko", string nku="Kula", string npu = "S", float au = 0, float bu = 0, float pru = 2) :Kolo(nkk, npu, au, bu, pru)
    {
        nku = nazwa;
    }
    
};

int main()
{
    Kolo k1;
    k1.wyswietl();
    Kula k2;
    k2.wyswietl();
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
