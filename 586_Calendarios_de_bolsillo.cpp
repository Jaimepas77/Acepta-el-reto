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
		int num, max = 0, min = 2000;
		cin >> num;
		for(int j = 0; j<num;j++)
		{
			int aux;
			cin >> aux;
			if(aux>max)
				max = aux;
			if(aux < min)
				min = aux;
		}
		
		if(num == 1)
			cout << 0 << endl;
		else
			cout << max - min - num + 1 << endl;
	}
}