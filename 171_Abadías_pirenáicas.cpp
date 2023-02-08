// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int climb;
	cin >> climb;
	while (climb != 0)
	{
		vector <int> v(climb);
		for (int i = 0; i < climb; i++)
		{
			cin >> v[i];
		}

		int abadis = 1, max = v[climb-1];
		for (int i = climb - 2; i >= 0; i--)
		{
			if (v[i] > max)
			{
				abadis++;
				max = v[i];
			}
		}

		cout << abadis << endl;

		cin >> climb;
	}
}