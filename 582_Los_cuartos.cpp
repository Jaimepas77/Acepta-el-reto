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
	int casos;
	cin >> casos;
	cin.get();
	for (int i = 0; i < casos;i++)
	{
		string camp;
		int espacios = 0;
		getline(cin, camp);
		
		for(int j = 0; j < camp.size();j++)
		{
			if(camp[j] == ' ')
				espacios++;
		}
		
		if(camp.size() == 0)
			cout << "MARISA NARANJO\n";
		else if (camp[4] == '-')
			cout << "SALIDA NULA\n";
		else if(espacios == 11)
			cout << "CORRECTO\n";
		else
			cout << "TARDE\n";
	}
}