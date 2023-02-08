// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int casos = 0;
	cin >> casos;
	for (int i = 0; i < casos; i++)
	{
		int pilas, volmin;
		cin >> pilas >> volmin;
		vector <long int> volt(pilas);
		for (int j = 0; j < pilas; j++)
		{
			cin >> volt[j];
		}
		sort(volt.begin(), volt.end());
		int coches = 0;
		for (int l = 0; l < volt.size()-1; l++)
		{
			if (volt[l] + volt[volt.size()-1] >= volmin)
			{
				coches++;
				volt.pop_back();
			}
		}

		cout << coches << endl;
	}
}