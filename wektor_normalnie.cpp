#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cmath>
#include <stdlib.h>

using namespace std;

void szukanieMINiMAX(int tab[], int T)
{
	int k;
	int min = tab[0];
    int max = tab[0];
	for(k=0;k<T;k++)
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
    cout << "Min wynosi = " << min << ",a Max wynosi = " << max << endl;
}

int main()
{

	int n;
	cout << "Podaj n (ilosc wartosci znajdujacych sie w wektorze)" << endl;
	cin >> n;
	
	int tab[n];
	int k;
    for(int i = 0; i<n;i++)
    {
    	cin >> k;
    	tab[i] = k;
	}
	szukanieMINiMAX(tab,n);
    return 0;
}
