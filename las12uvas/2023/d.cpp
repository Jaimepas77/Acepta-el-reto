#include <iostream>
#include <vector>
#include <map>

using lli = long long int;
using namespace std;

int main() {
	lli n;
	cin >> n;
	while(n!=0) {
		map<lli, int>v;
		lli ret = 0;
		while(n--) {
			lli aux;
			cin >> aux;
			v[aux]++;
			if(v[aux] == 2) {
				ret++;
				v[aux] = 0;
			}
		}
		
		cout << ret << '\n';
		
		cin >> n;
	}
}