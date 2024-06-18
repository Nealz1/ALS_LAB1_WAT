#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cmath>
#include <stdlib.h>

using namespace std;

int fibrek(int n)
{
    if (n <= 1)
    {
    	return n;
	}
    return fibrek(n - 1) + fibrek(n - 2);
}

void wyswietlfib(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout << fibrek(i) << endl;
	}	
}

void generowanieDoPliku(char nazwapliku[50], int n)
{
	ofstream plik; //deklaracja strumienia
	plik.open(nazwapliku); //otwarcie pliku
	int i;
	for(i=1;i<=n;i++) // 2 petle for w celu zapisania tablicy do pliku
    {
        plik << fibrek(i) << endl;
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
	wyswietlfib(n);
	generowanieDoPliku(nazwapliku,n);
	
 return 0;
}
