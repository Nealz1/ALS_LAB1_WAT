//============================================================================
//                  Algorytmy i Struktury Danych
// Zadanie 1.2
//  Fibonacci iteracyjnie
//
//  WCY21IX4S0  Miksiewicz Pawel
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cmath>
#include <stdlib.h>

using namespace std;

void Funkcja(char nazwapliku[50], int n)
{    
    long long a = 0, b = 1;
    
    ofstream plik;
  	plik.open(nazwapliku);
  	
     for(int i=0;i<n;i++)
     {
            cout << b << endl;
            plik << b << endl;
            b += a;
            a = b-a;
     }     
plik.close();
}

int main()
{
	char nazwapliku[50];
    cout << "Podaj nazwe pliku do zapisu wraz z rozszerzeniem(!)" << endl;
  	cin >> nazwapliku;
  	
  	int n;
  	cout << "Podaj ilosc wyrazow z ciagu Fibonacciego do wyswietlenia" << endl;
  	cin >> n;
  	
  	cout << "Wyrazy ciagu fibonacciego do n = " << n << endl;
  	Funkcja(nazwapliku, n);
	
 return 0;
}
