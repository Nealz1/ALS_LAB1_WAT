#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cmath>
#include <stdlib.h>

using namespace std;


void zapisDoPlikuzMINiMAX(char nazwapliku[50], int tab[],int n) //zapisywanie danych do pliku
{
ofstream plik;
plik.open(nazwapliku);
int i;
int k;
	int min = tab[0];
    int max = tab[0];
	for(k=0;k<n;k++)
    {
        if(tab[k]>max)
        {
            max = tab[k]; //jesli obecny element tablicy bedzie wiekszy od max to ten element staje sie nowym maxem 
        }
        if(tab[k]<min)
        {
            min = tab[k]; //jesli obecny element tablicy bedzie mniejszy od min to ten element staje sie nowym min
        }
    }
plik <<"Min = " << min << endl;
plik <<"Max = " << max << endl;

plik.close();
}

int main()
{
    cout << "WCY21IX4S0 PAWEL MIKSIEWICZ ZADANIE 5 LAB 01" << endl << endl;

    char nazwapliku[50];
    cout << "Podaj nazwe pliku do odczytu (KONIECZNIE wraz z rozszerzeniem .txt)!" << endl;
    cin >> nazwapliku;
    fstream odczyt;
    odczyt.open(nazwapliku);
    if (!odczyt)
    {
        cout << "Brak pliku";
        return 1;
    }
    
    int x;
    cout << "Podaj ilosc elementow w pliku (w pliku przyklad.txt jest 8)" << endl;
    cin >> x;
    
    int i;
    int liczba;
    int tab[x];
    for(i = 0; i<x;i++)
    {
        odczyt >> liczba;
        tab[i]=liczba;
    }

    char drugiplik[50];
    cout << "Podaj nazwe drugiego pliku do zapisu (KONIECZNIE wraz z rozszerzeniem .txt)!" << endl;
    cin >> drugiplik;

	zapisDoPlikuzMINiMAX(drugiplik,tab,x);
	
	cout << "Min i Max zostaly zapisane do pliku" << endl;
    odczyt.close();
    return 0;
}
