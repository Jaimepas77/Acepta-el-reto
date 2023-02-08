// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
	int ini, fin, n;
	cin >> ini >> fin >> n;
	if (ini != 0 || fin != 0 || n != 0)
	{
		int casos, act;
		cin >> casos;
		bool j=false, k=false;
		if (ini == n)
			j = true;
		if (fin == n)
		{
			k = true;
		}
		for (int i = 0; i < casos; i++)
		{
			cin >> act;
			if (act == n)
			{
				j = true;
			}
			if (act == n + 1)
			{
				k = true;
			}
		}
		if (j && k)
		{
			cout << "LO SABE" << endl;
		}
		else
			cout << "NO LO SABE" << endl;
		main();
	}
}