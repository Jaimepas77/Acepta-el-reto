// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	lli z;
	cin >> z;
	while(z--) {
		lli a;
		cin >> a;
		cout << a*(a+1) + (a-1)*a/2 << '\n';
	}
}