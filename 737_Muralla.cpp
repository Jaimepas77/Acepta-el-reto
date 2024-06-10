#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;
int main() {
	int c;
	cin >> c;
	while(c--) {
		lli n;
		cin >> n;
		
		vector<lli>v(n);
		lli max = 0;
		for(auto &x:v) {
			cin >> x;
			if(max < x)
				max = x;
		}
		
		vector<lli>acum(n+1, 0);
		for(lli i = 1; i <= n; i++) {
			acum[i] = acum[i-1]+max-v[i-1];
		}
		
		cin >> n;
		while(n--) {
			lli ini, fin;
			cin >> ini >> fin;
			
			cout << acum[fin]-acum[ini-1] << '\n';
		}
		
		cout << "---\n";
	}
}