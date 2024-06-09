#include <iostream>

using namespace std;
using lli = long long int;
int main() {
	int c;
	cin >> c;
	while(c--) {
		lli a, b;
		cin >> a >> b;
		cout << a/b+(bool(a%b)) << '\n';
	}
}