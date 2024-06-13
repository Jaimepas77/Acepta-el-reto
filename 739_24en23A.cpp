// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	lli z;
	cin >> z;
	while(z--) {
		lli a, b, c, d;
		cin >> a >> b >> c >> d;
		lli sol1, sol2;
		sol1 = a/c + (a%c!=0);
		sol1 *= b/d + (b%d!=0);
		sol2 = a/d + (a%d!=0);
		sol2 *= b/c + (b%c!=0);
		
		if(sol1 < sol2)
			cout << sol1;
		else
			cout << sol2;
		cout << '\n';
	}
}