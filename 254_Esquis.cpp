#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using lli = long long int;

int main() {
	int n;
	cin >> n;
	while(n != 0) {
		vector<lli>v1(n), v2(n);
		for(auto &x: v1)
			cin >> x;
		for(auto &x: v2)
			cin >> x;
		
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		lli suma = 0;
		for(int i = 0; i < v1.size(); i++) {
			suma += abs(v1[i]-v2[i]);
		}
		
		cout << suma << '\n';
		
		cin >> n;
	}
}