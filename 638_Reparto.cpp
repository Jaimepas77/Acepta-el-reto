#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using lli = long long int;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		lli a, b;
		cin >> a >> b;
		lli min = b, max = 0;

		lli minPers = b / (a - 1);
		lli maxPers = minPers;
		if (b % (a - 1) > 0)
			maxPers++;

		if (minPers == maxPers)
		{
			max = maxPers + b;
			min = max - 1;
		}
		else
		{
			min = minPers + b;
			max = min;
		}
		
		if (min < b)
			min = b;
		if (max < min)
			min = max;

		cout << min << ' ' << max << '\n';
	}
}