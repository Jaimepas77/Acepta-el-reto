// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;
using lli = long long int;

lli mcd(lli a, lli b) {
	if(b == 0)
		return a;
	else
		return mcd(b, a%b);
}

int main() {
	int z;
	cin >> z;
	while(z--) {
		lli a, b;
		cin >> a >> b;
		lli tam = mcd(a, b);
		
		cout << b/tam*a/tam << '\n';
	}
}