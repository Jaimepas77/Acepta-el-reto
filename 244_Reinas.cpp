#include <iostream>
#include <set>

using namespace std;
using lli = long long int;

int main() {
	lli n, m;
	cin >> n >> m;
	while(n != 0 || m != 0)
	{
		set<int>filas, columnas, d1, d2;
		bool sol = true;
		pair<int, int> x;
		for(int i = 0; i < m; i++) {
			cin >> x.first >> x.second;
			if(sol) {
				if(filas.count(x.first) == 0 && columnas.count(x.second) == 0
				&& d1.count(x.first - x.second) == 0 && d2.count(n-1-x.second-x.first) == 0) {
					filas.insert(x.first);
					columnas.insert(x.second);
					d1.insert(x.first - x.second);
					d2.insert(n-1-x.second-x.first);
				}
				else
					sol = false;
			}
		}
		
		
		if(!sol) {
			cout << "SI\n"; // Se atacan
		}
		else {
			cout << "NO\n";
		}
		
		cin >> n >> m;
	}
}