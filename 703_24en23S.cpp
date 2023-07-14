// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int h, m, v;
		char c;
		cin >> h >> c >> m >> v >> v;
		cout << h*v + (v*m)/60 << '\n';
	}
}