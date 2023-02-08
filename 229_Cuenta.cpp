#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

int main() {
	int n;
	cin >> n;
	while(n != 0) {
		vector<lli> v(n);
		lli acum = 0;
		for(auto &x:v) {
			cin >> x;
			acum += x;
		}
		lli newAcum = 0, puntos = 0;
		if(newAcum == acum) {
			puntos++;
		}
		for(const auto &x:v) {
			newAcum += x;
			acum -= x;
			if(newAcum == acum) {
				puntos++;
			}
		}
		
		cout << puntos << '\n';
		
		cin >> n;
	}
}