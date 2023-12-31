#include <iostream>
#include <vector>

using lli = long long int;
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n != 0) {
		lli ret = 1-n;
		while(n--) {
			lli aux;
			cin >> aux;
			ret += aux;
		}
		
		cout << ret << '\n';
		cin >> n;
	}
}