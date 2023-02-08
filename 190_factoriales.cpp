#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	lli a, b;
	cin >> a >> b;
	while(a >= b) {
		lli sol = 1;
		while(a>b) {
			sol *= a--;
		}

		cout << sol << '\n';

		cin >> a >> b;
	}
}