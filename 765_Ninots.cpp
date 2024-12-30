// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <map>

using namespace std;
using lli = long long int;

int main() {
	int z;
	cin >> z;
	while(z != 0) {
		map<string, int> small;
		map<string, int> big;
		while(z--) {
			string tmp;
			cin >> tmp;
			if(tmp[0] >= 'a') {//small
				small[tmp]++;
			}
			else {//big
				big[tmp]++;
			}
		}
		//Localizar máximo
		string max1, max2 = "";
		int m1 = 0, m2 = 0;
		for(auto &x : small) {
			if(x.second > m1) {
				m1 = x.second;
				max1 = x.first;
			}
			else if(x.second == m1) {
				max1 = "empate";
			}
		}
		for(auto &x : big) {
			if(x.second > m2) {
				m2 = x.second;
				max2 = x.first;
			}
			else if(x.second == m2) {
				max2 = "EMPATE";
			}
		}
		
		cout << max1 << ' ' << max2 << '\n';
		cin >> z;
	}
}