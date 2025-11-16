// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

typedef long long int lli;

using namespace std;

int main() {
	lli n;
	cin >> n;
	while(n != 0) {
		vector<char>aux(n);
		vector<vector<char>>m(n, aux);
		
		for(auto &v:m)
			for(auto &x:v)
				cin >> x;
		
		char mov; int elem;
		cin >> mov;
		while(mov != 'x') {
			cin >> elem;
			if(mov == 'f') {
				if(elem > 0) {
					elem--;
					char ini = m[elem][m[0].size()-1];
					for(int i = m[0].size()-1; i > 0; i--)
						m[elem][i] = m[elem][i-1];
					m[elem][0] = ini;
				}
				else {
					elem*=-1;
					elem--;
					char ini = m[elem][0];
					for(int i = 1; i < m[0].size(); i++)
						m[elem][i-1] = m[elem][i];
					m[elem][m[0].size()-1] = ini;
				}
			}
			else {
				if(elem > 0) {
					elem--;
					char ini = m[m.size()-1][elem];
					for(int i = m.size()-1; i > 0; i--)
						m[i][elem] = m[i-1][elem];
					m[0][elem] = ini;
				}
				else {
					elem*=-1;
					elem--;
					char ini = m[0][elem];
					for(int i = 1; i < m.size(); i++)
						m[i-1][elem] = m[i][elem];
					m[m.size()-1][elem] = ini;
				}
			}
			
			cin >> mov;
		}
		
		for(auto &v:m) {
			for(auto &x:v)
				cout << x;
			cout << '\n';
		}
		cout << "---\n";
		
		cin >> n;
	}
}