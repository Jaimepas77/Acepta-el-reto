// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <utility>
#include <set>

using namespace std;

typedef long long int lli;

int main()
{
	int n;
	cin >> n;
	while (n)
	{
		set<int>v;
		int act, maxi = 1, tmp = 0;
		while (n--)
		{
			cin >> act;
			auto it = v.find(act);
			if (it != v.end())
			{
				v.erase(it);
				tmp--;
			}
			else
			{
				v.insert(act);
				tmp++;
			}

			maxi = max(tmp, maxi);
		}
		cout << maxi << '\n';

		cin >> n;
	}
}