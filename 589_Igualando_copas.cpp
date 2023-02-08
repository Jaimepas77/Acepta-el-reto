// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

typedef long long int lli;

int main()
{
	lli copas;
	cin>>copas;
	while(copas!=0)
	{
		lli max = 0;
		lli acum = 0;
		for(int i = 0; i < copas; i++)
		{
			lli aux;
			cin >> aux;
			
			if(aux>max)
			{
				acum += i*(aux - max);
				max = aux;
			}
			
			acum += max - aux;
		}
		
		
		cout << acum << endl;
		
		cin >> copas;
	}
}