// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	int z;
	cin >> z;
	while(z--) {
		int a1, b1, a2, b2;
		cin >> a1 >> b1 >> a2 >> b2;
		int sol = max(min(b1, b2) - max(a1, a2)+1, 0);
		
		cout << sol << '\n';
	}
}