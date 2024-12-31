#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

using lli = long long int;

lli mcd(lli a, lli b) {
	if(b == 0)
		return a;
	else
		return mcd(b, a%b);
}

int main()
{
	lli z;
	cin >> z;
	while(z--) {
		lli a, b;
		cin >> a >> b;
		lli div = mcd(a, b);
		cout << a/div + b / div - 1 << '\n';
	}
}