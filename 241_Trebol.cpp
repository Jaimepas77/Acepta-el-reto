// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

typedef long long int lli;

int main(){
	lli num;
	cin >> num;
	while(num--) {
		lli a;
		cin >> a;
		if(a <= 2 || a == 5)
			cout << "IMPOSIBLE\n";
		else {
			cout << a%3 << '\n';
		}
	}
}