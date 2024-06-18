//============================================================================
//                  Algorytmy i Struktury Danych
// Zadanie 1.4
//  Mnozenie macierzy
//
//  WCY21IX4S0  Miksiewicz Pawel
//============================================================================

#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    int tab1[10][10], tab2[10][10], tab3[10][10];
    int wiersz1, kolumny1, wiersz2, kolumny2;
    int i, j, k;

    cout << "Podaj ilosc wierszy pierwszej macierzy " << endl;
    cin >> wiersz1;
    cout << "Podaj ilosc kolumn pierwszej macierzy " << endl;
    cin >> kolumny1;
    cout << "Podaj ilosc wierszy drugiej macierzy " << endl;
    cin >> wiersz2;
    cout << "Podaj ilosc kolumn drugiej macierzy " << endl;
    cin >> kolumny2;

	//WARUNEK ZEBY MNOZYC
    if (kolumny1!=wiersz2)
    {
        cout << "Liczba kolumn pierwszej macierzy nie jest rowna ilosci wierszej drugiej macierzy. Nie mozna wykonac mnozenia" << endl;
		return 0;
    }

	//PIERWSZA MACIERZ
    cout << "Pierwsza macierz:" << endl;
    for(i = 0; i < wiersz1; ++i)
    {
        for(j = 0; j < kolumny1; ++j)
        {
            cout << "Indeks [" << i + 1 <<"]["<< j + 1 << "]"<< " - ";
            cin >> tab1[i][j];
        }
    }

	//DRUGA MACIERZ
    cout << endl << "Druga macierz: " << endl;
    for(i = 0; i < wiersz2; ++i)
    {
        for(j = 0; j < kolumny2; ++j)
        {
            cout << "Indeks [" << i + 1 <<"]["<< j + 1 << "]"<< " - ";
            cin >> tab2[i][j];
        }
    }

	//ZEROWANIE MACIERZY WYNIKOWEJ
    for(i = 0; i < wiersz1; ++i)
    {
        for(j = 0; j < kolumny2; ++j)
        {
            tab3[i][j]=0;
        }
    }

	//MNOZENIE MACIERZY
    for(i = 0; i < wiersz1; ++i)
    {
        for(j = 0; j < kolumny2; ++j)
        {
            for(k = 0; k < kolumny1; ++k)
            {
                tab3[i][j] = tab3[i][j] + tab1[i][k] * tab2[k][j];
            }
        }
    }

	//WYSWIETLANIE WYNIKOW
    cout << endl << "Wynik mnozenia: " << endl;
    for(i = 0; i < wiersz1; ++i)
    {
        for(j = 0; j < kolumny2; ++j)
            {
                cout << tab3[i][j] << " ";
                if(j == kolumny2-1)
                {
        		cout << endl;
                }
            }
	}

    return 0;
}
