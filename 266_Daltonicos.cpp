// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

typedef long long int lli;

using namespace std;

int main() {
	int n = 1, k;
	cin >> n >> k;
	while(n > 0) {
		vector<char> v(k);
		vector<vector<char>> m(n, v);
		for(auto &vaux:m)
			for(auto &x:vaux)
				cin >> x;
		
		int t;
		cin >> t;
		vector<int> letras('Z'-'A'+1);
		for(int i = 0; i < letras.size(); i++) {
			letras[i] = i;
		}
		while(t--) {
			char aux1, aux2;
			cin >> aux1 >> aux2;
			for(int i = 0; i < letras.size(); i++) {
				if(letras[i] == aux1-'A') {
					letras[i] = aux2-'A';
				}
			}
		}
		
		for(auto &vaux:m) {
			for(auto &x:vaux) {
				cout << (char)('A' + letras[x-'A']);
			}
			cout << '\n';
		}
		
		cin >> n >> k;
	}
}