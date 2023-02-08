// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

typedef long long int lli;

int main()
{
	lli cases, still;
	cin >> cases >> still;
	while(cases != 0 || still != 0)
	{
		lli max = 0, tmp = 0, tmpAux = 0, sad = 0;//sad es el tiempo que lleva sin recibir light de la life
		for(int i = 0; i < cases; i++)
		{
			int aux;
			cin>> aux;
			
			if(aux!=0)
			{
				if(tmp!=0)
					tmp+=tmpAux+1;
				else
					tmp++;
				tmpAux = 0;
				sad = 0;
			}
			else if(sad < still && tmp != 0)
			{
				sad++;
				tmpAux++;
			}
			else
			{
				tmp = 0;
				sad = 0;
			}
			
			if(tmp > max)
				max = tmp;
		}
		
		cout << max << endl;
		
		cin >> cases >> still;
	}
}