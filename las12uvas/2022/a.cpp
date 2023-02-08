#include <iostream>

using namespace std;

using lli = long long int;

int  main() {
	int n;
	cin >> n;
	while(n--) {
		int c;
		cin >> c;
		if(c > 0) {
			cout << c-1;
		}
		else {
			cout << c;
		}
		cout << '\n';
	}
}