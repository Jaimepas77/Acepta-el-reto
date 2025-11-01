// Usuario de Acepta el reto: jjjjjjjp022

#include <iostream>

using lli = long long int;

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		lli insectos, aracnidos, crustaceos, escolop, anillos;
		cin >> insectos >> aracnidos >> crustaceos >> escolop >> anillos;
		cout << insectos*6 + aracnidos*8 + crustaceos*10 + escolop*anillos*2 << '\n';
	}
}