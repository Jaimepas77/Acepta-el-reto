#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

int main() {
	int n;
	cin >> n;
	while(n--) {
		lli a, b;
		cin >> a >> b;
		if (a >= b*12)
			cout << "SI\n";
		else
			cout << "NO\n";
	}
}