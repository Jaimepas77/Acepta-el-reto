// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	char num;
	cin.get(num);
	while (cin)
	{
		vector <int>v(10, 0);
		v[num - '0']++;
		cin.get(num);
		while (num != '\n')
		{
			v[num - '0']++;
			cin.get(num);
		}
		
		bool subnormal = true;
		for (int i = 1; i < v.size() && subnormal; i++)
		{
			if (v[0] != v[i])
				subnormal = false;
		}

		if (subnormal)
			cout << "subnormal\n";
		else
			cout << "no subnormal\n";

		cin.get(num);
	}
}