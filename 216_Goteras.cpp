// Usuario de Acepta el reto: jjjjjjjp022

#include <iostream>
#include <iomanip>

using lli = long long int;

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		lli gotas;
		cin >> gotas;
		int s = gotas%60;
		int m = (gotas/60)%60;
		int h = (gotas/3600)%3600;
		cout << setfill('0') << setw(2) << h;
		cout << ":";
		cout << setfill('0') << setw(2) << m;
		cout << ":";
		cout << setfill('0') << setw(2) << s;
		cout << '\n';
	}
}