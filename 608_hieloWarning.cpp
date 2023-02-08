#include <iostream>

using namespace std;

int main()
{
	int casos;
	cin >> casos;
	while(casos != 0)
	{
		int cont = 0;
		int max = 7;//Temperatura máxima local (por encima de 6 al principio)
		int tmp;
		while(casos--)
		{
			cin >> tmp;
			if(max > 6 && tmp <= 4)//Se avisa al conductor novel
			{
				cont++;
				max = tmp;//Se reinicia max
			}
			else if(tmp > max)
				max = tmp;//Sube la temperatura!!
		}
		cout << cont << '\n';
		
		cin >> casos;
	}
}