#include <iostream>
#include <algorithm>
#include <math.h>

using lli = long long int;
using namespace std;

bool dentro(lli r, const lli &x, const lli &y)
{
	return (sqrt(pow(x, 2) + pow(y, 2)) <= r);
}

lli contenido(lli r, lli x, lli y)
{
	// cout << r << endl;
	x = abs(x);
	y = abs(y);
	lli ret = 0;
	if (dentro(r, x, y))
	{
		// cout << r << " " << x << " " << y << endl;
		ret++;
	}
	 
	lli xMod = x;
	lli yMod = y;
	if (sqrt(pow(abs(x-r), 2) + pow(y, 2)) < sqrt(pow(abs(x), 2) + pow(y-r, 2)))
		xMod = abs(x-r);
	else
		yMod = abs(y-r);
	
	if (r <= 1)
		return ret;
	else
		return ret + contenido(r/2, xMod, yMod);
}

int main() {
	lli r, x, y;
	cin >> r >> x >> y;
	while(cin)
	{
		cout << contenido(r, x, y) << '\n';
		
		cin >> r >> x >> y;
	}
}