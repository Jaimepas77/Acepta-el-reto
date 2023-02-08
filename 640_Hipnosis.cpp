#include <iostream>

using namespace std;

using lli = long long int;

int main()
{
	lli n, d;
	cin >> n >> d;
	while (n != 0 || d != 0)
	{
		lli c = n;
		lli r = 0;
		string res = "";
		while (c >= 9)
		{
			char tmp = '0' + c % 9;
			if (tmp >= '0' + d)
				tmp++;
			res = tmp + res;
			c /= 9;
		}
		char tmp = '0' + c;
		if (tmp >= '0' + d)
			tmp++;
		res = tmp + res;

		cout << res << '\n';

		cin >> n >> d;
	}
}