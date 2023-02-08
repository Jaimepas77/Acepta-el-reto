#include <iostream>

using namespace std;

using lli = long long int;

int  main() {
	lli a, b, n;
	cin >> a >> b >> n;
	while(a != 0 || b != 0 || n != 0) {
		n %= 6;
		while(n--) {
			lli aux = b;
			b = b-a;
			a = aux;
		}
		
		cout << a << '\n';
		
		cin >> a >> b >> n;
	}
}