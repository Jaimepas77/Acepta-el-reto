#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

//Muy complicado algorítmicamente
using lli = long long int;
using namespace std;

int main() {
	lli n;
	cin >> n;
	while(n) {
		vector<lli>v(n);
		lli acum = 0;
		for(auto&x:v) {
			cin >> x;
			acum += x;
		}
		
		sort(v.begin(), v.end());
		lli arriba = v[v.size()-1]/2;
		lli abajo = v[v.size()-1] - arriba;
		lli altura = abajo;
		
		lli antPos = v.size()-2;
		for(lli i = v.size()-2; i >= 0; i--) {
			while(abajo - tirarUno >= arriba + tirarUno) {
				
				
			}
		}
		
		cout << ret << '\n';
		
		cin >> n;
	}
}