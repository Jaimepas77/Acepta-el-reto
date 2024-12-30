// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

int main() {
	int z;
	cin >> z;
	while(z != 0) {
		int result = 0;
		while(z--) {
			int b, c;
			cin >> b >> c;
			result += b;
			result -= c;
		}
		cout << result << '\n';
		cin >> z;
	}
}