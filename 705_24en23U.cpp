// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;
using lli = long long int;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int k;
		cin >> k;
		lli MAX = 1, h = 1;
		lli ant = 0, act;
		while(k--) {
			cin >> act;
			
			lli dif = act-ant;
			
			if(dif > h) {
				if(dif > MAX) {
					MAX = dif;
					h = dif-1;
				}
				else {
					MAX++;
					h = MAX;
				}
			}
			else if(dif == h) {
				h--;
			}
			
			ant = act;
		}
		
		cout << MAX << '\n';
	}
}