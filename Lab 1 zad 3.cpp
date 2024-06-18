//============================================================================
//                  Algorytmy i Struktury Danych
// Zadanie 1.3
// Algorytm zwykly i Hornera
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

int main()
{	
	int a2, a1, a0, x, w1, w2;
	
	cout << "Podaj a2, a1, a0, x" << endl;
	cin >> a2 >> a1 >> a0 >> x;
	
	//ALGORYTM ZWYK£Y
	w1 = a2*x*x;
	w1 = w1+a1*x;
	w1 = w1+a0;
	
	cout << "Wynik Alogrytmem Zwyklym = "<< w1 << endl;
	
	//ALGORYTM HORNERA
	w2 = a2*x+a1;
	w2 = w2*x+a0;
	
	cout << endl << "Wynik Algorytmem Hornera = "<< w2 << endl;
	
 return 0;
}
