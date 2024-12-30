// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using lli = long long int;

int main() {
	int z;
	cin >> z;
	while(z != 0) {
		lli maxD = 0;
		lli deuda = 0;
		vector<lli>v;
		while(z--) {
			lli tmp;
			cin >> tmp;
			if(tmp+deuda > maxD) {
				maxD = tmp+deuda;
			}
			v.push_back(tmp);
			deuda++;
		}
		
		for(int i = 0; i < v.size()-1; i++)
			cout << (maxD--) - v[i] << ' ';
		cout << maxD - v[v.size()-1] << '\n';
		
		cin >> z;
	}
}