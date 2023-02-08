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
	for (int i = 0; i < casos; i++)
	{
		float ag1, ag2;
		cin >> ag1 >> ag2;
		int agu1 = ag1 * 10;
		int agu2 = ag2 * 10;
		if ((agu1 % 300) * 10 / 3 == agu2 * 10 / 36)
		{
			int a1 = agu1 / 300, a2 = agu2 / 60;
			if (a1 < 10)
				cout << 0;
			cout << a1 << ":";
			if (a2 < 10)
				cout << 0;
			cout << a2 << endl;
		}
		else if ((agu2 % 300) * 10 / 3 == agu1 * 10 / 36)
		{
			int a2 = agu2 / 300, a1 = agu1 / 60;
			if (a2 < 10)
				cout << 0;
			cout << a2 << ":";
			if (a1 < 10)
				cout << 0;
			cout << a1 << endl;
		}
		else
			cout << "ERROR\n";
	}
}