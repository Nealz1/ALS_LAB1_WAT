#include <cstdlib>
#include <iostream>

using namespace std;

int silnia(int n)
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
