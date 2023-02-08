#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	lli a;
	cin >> a;
	while(a != 0)
	{
		lli aux, acum = 0, total = 0;
		while(a--)
		{
			cin >> aux;
			total += acum * aux;
			acum += aux;
		}
		
		cout << total << '\n';
		
		cin >> a;
	}
}