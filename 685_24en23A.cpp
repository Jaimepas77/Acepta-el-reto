// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <algorithm>

using namespace std;
using lli = long long int;

int main() {
	lli a, b, c, d;
	cin >> a >> b >> c >> d;
	while(a != 0 || 0 != b || 0 != c || 0 != d) {
		
		if(abs(a-c) == abs(b-d) || b == d || a == c)
			cout << "SI\n";
		else
			cout << "NO\n";
		
		
		cin >> a >> b >> c >> d;
	}
}