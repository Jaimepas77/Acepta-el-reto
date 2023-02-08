// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int casos;
	cin >> casos;
	for (int i = 0; i < casos; i++)
	{
		//Leer
		int peso;
		cin >> peso;
		long long int palmeras;
		cin >> palmeras;
		vector <int> v(palmeras);
		for (int& x : v) cin >> x;

		//Resolver
		int max = 0, acum = 0, act = 0;
		for (int i = 0; i < v.size(); i++)
		{
			act++;
			if (peso <= v[i])
			{
				acum++;
			}

			if (acum > 5)
			{
				int j = i - act + 1;
				while (v[j] < peso)
				{
					act--;
					j++;
				}
				act--;
				acum = 5;
			}

			if (act > max)
			{
				max = act;
			}
		}
		cout << max << endl;
	}
}