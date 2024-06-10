#include <iostream>

using namespace std;
using lli = long long int;
int main() {
	int c;
	cin >> c;
	while(c--) {
		int a, b;
		char x;
		cin >> a >> x >> b;
		int sol = 0;
		sol += (23-a)*60 + (60-b);
		
		cin >> a >> x >> b;
		sol += a*60 + b;
		
		cout << (sol*48)/12 << '\n';
	}
}