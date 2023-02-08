#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using lli = long long int;
using namespace std;

lli repite(const vector<pair<lli, lli>>& v)
{
	lli ret = -1;
	lli all = v.size();
	for (lli i = all - 2; i >= 0; i--)
	{
		if (v[all - 1].second == v[i].second)
		{
			ret = i;
			break;
		}
	}

	return ret;
}

int main()
{
	lli a, b;
	cin >> a >> b;
	while (cin)
	{
		lli r = -1, c = 0;
		lli rep = -1;
		vector<pair<lli, lli>>v;//Par num resto
		v.push_back({ -1 , a});
		lli nums = 0;
		while (r != 0 && rep == -1)
		{
			a *= 10;
			v.push_back({ a / b, a % b });
			c = c * 10 + a / b;
			r = a % b;

			a = r;
			rep = repite(v);
			nums++;
		}
		/*c /= 10;
		nums--;*/

		cout << "0.";
		//Print sol
		if (rep == -1)
		{
			//cout << c;
			for (lli i = 1; i < v.size(); i++)
				cout << v[i].first;
		}
		else
		{
			lli periodo = nums - rep;
			lli pot = pow(10, periodo);
			lli primero = c / pot;
			if (rep > 0)
			{
				//cout << primero;
				for (int i = 1; i <= rep; i++)
					cout << v[i].first;
			}
			lli segundo = c % pot;
			if (periodo > 0)
			{
				//cout << "|" << segundo << "|";
				cout << '|';
				for (int i = rep+1; i < v.size(); i++)
					cout << v[i].first;
				cout << '|';
			}
		}
		cout << '\n';

		cin >> a >> b;
	}
}