#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "pytanie.h"
#include " "


using namespace std;

void Pytanie::wczytaj()
{
	fstream plik;
	plik.open("quiz.txt", ios::in);
	if (plik.good() == false)
	{
		cout << "Error" << endl;
		exit(0);
	}
	int nr_linii = (nr_pytania - 1) * 6 + 1;
	int aktualny_nr = 1;
	string linia;

	while (getline(plik, linia))
	{
		if(aktualny_nr==nr_linii)tresc = linia;
		if(aktualny_nr==nr_linii+1)a = linia;
		if(aktualny_nr==nr_linii+2)b = linia;
		if(aktualny_nr==nr_linii+3)c = linia;
		if(aktualny_nr==nr_linii+4)d = linia;
		if(aktualny_nr==nr_linii+5)poprawna = linia;
		aktualny_nr++;
	}
	plik.close();
}

void Pytanie::zadaj()
{
	cout << "\n" << tresc << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << "Odpowiedz: " <<odpowiedz<< endl;
	cin >> odpowiedz;

}

void Pytanie::sprawdz()
{
	if (odpowiedz == poprawna)
	{
		punkt = 1;
	}
	else punkt = 0;
}