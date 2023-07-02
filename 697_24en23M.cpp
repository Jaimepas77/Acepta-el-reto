// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

int main() {
	int n;
	cin >> n;
	while(n != 0) {
		vector<lli>aux(n, 0);
		vector<vector<lli>>m(n, aux);
		for(auto &v:m) {
			for(auto &x:v) {
				cin >> x;
			}
		}
		lli acum = 0;
		int x = n/2, y = n/2;
		acum += m[x][y];
		int cont = 1;//Pasos a dar antes de girar
		int	dir = 0;//arriba = 0; dcha = 1;...
		bool fuera = false;
		while(!fuera) {
			for(int i = 0; i < cont; i++) {
				if(dir%4 == 0) {
					x--;
				}
				else if(dir%4 == 1) {
					y++;
				}
				else if(dir%4 == 2) {
					x++;
				}
				else if(dir%4 == 3) {
					y--;
				}
				
				if(x < 0 || y < 0 || x >=n || y >= n) {
					fuera = true;
					break;
				}
				else {
					acum += m[x][y];
				}
			}
			cont += 1;
			dir = (dir+1)%4;
		}
		
		cout << acum << '\n';
		
		cin >> n;
	}
}