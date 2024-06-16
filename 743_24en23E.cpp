// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	lli z;
	cin >> z;
	while(z!=0) {
		lli acum = 0;
		lli doble = 0;
		while(z--) {
			lli aux;
			cin >> aux;
			acum += aux;
			doble += aux/2 + aux%2;
		}
		
		cout << acum-doble << '\n';
		
		cin >> z;
	}
}