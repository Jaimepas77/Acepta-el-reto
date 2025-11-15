#include <iostream>
#include <set>

using namespace std;
using lli = long long int;

int main() {
	int n, m, a;
	cin >> n >> m >> a;
	while(n != 0) {
		set<pair<int, int>>sombra, arboles;
		pair<int, int>arb;
		while(a--) {
			cin >> arb.first >> arb.second;
			arboles.insert(arb);
			sombra.erase(arb);
			for(int i = -1; i <= 1; i++) {
				for(int j = -1; j <= 1; j++) {
					if(
						(i != 0 || j != 0) &&
						arb.first + i <= n && arb.first + i > 0 &&
						arb.second + j <= m && arb.second + j > 0 &&
						arboles.count({arb.first + i, arb.second + j}) == 0
					)
						sombra.insert({arb.first + i, arb.second + j});
				}
			}
		}
		
		cout << sombra.size() << '\n';
		cin >> n >> m >> a;
	}
}