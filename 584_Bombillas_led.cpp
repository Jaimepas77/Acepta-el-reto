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
	for (int i = 0; i < casos;i++)
	{
		lli time, veces, yo;
		cin >> time >> veces >> yo;
		if(time/yo> veces || (time/yo == veces && time%yo>0))
			cout << "ENCENDIDOS\n";
		else if(time / yo < veces)
			cout << "HORAS\n";
		else
			cout << "AMBAS\n";
	}
}