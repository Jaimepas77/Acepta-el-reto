#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using lli = long long int;
int main() {
	int c;
	cin >> c;
	while(c--) {
		lli n;
		cin >> n;
		
		vector<lli>v(n);
		map<lli, vector<lli>>cambios; //Para un momento dado, que columnas se cambian con su izqda
		for(lli i = 0; i < n; i++) {
			v[i] = i;//Inicialización de v
			
			if(i > 0) { //Lectura de swaps
				lli cont;
				cin >> cont;
				while(cont--) {
					lli momento;
					cin >> momento;
					cambios[momento].push_back(i);
				}
			}
		}
		
		for(auto &x:cambios) {
			for(auto &y:x.second) {
				swap(v[y-1], v[y]);
			}
		}
		
		lli menor = 0, igual = 0, mayor = 0;
		for(lli i = 0; i < n; i++) {
			if(v[i] < i)
				mayor++;
			else if(v[i] == i)
				igual++;
			else
				menor++;
		}
		
		cout << menor << ' ' << igual << ' ' << mayor << '\n';
	}
}