//============================================================================
//                  Algorytmy i Struktury Danych
// Zadanie 1.1
//  Silnia iteracyjnie
//
//  WCY21IX4S0  Miksiewicz Pawel
//============================================================================

#include <cstdlib>
#include <iostream>

using namespace std;

int silnia(int n) //od 2 do liczby
{
	int licz = 1;
	for(int i = 2; i<=n;i++)
	{
		licz = licz * i;
	}
	return licz;
}

int main()
{

	cout << "Silnia iteracyjnie" << endl << endl;
	
	int n;
 
 	cout<<"Podaj liczbe: " << endl;
 	cin>>n;
 	cout << n << "!  wynosi = " << silnia(n);

 return 0;
}
