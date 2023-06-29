// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using lli = long long int;

pair<lli, lli> super(lli a) {
	vector<lli> v;
	while(a>0) {
		v.push_back(a%10);
		a /= 10;
	}
	
	sort(v.begin(), v.end());
	
	lli m = 0;
	lli s = 0;
	lli exp = 1;
	for(auto &x:v) {
		m *= 10;
		m += x;
		
		s+=x*exp;
		exp*=10;
	}
	
	return {s, m};
}

int main() {
	lli n;
	cin >> n;
	while(n != 0) {
		
		pair<lli, lli> num = super(n);
		lli res = num.first-num.second;
		cout << num.first << " - " << num.second;
		cout << " = " << res;
		cout << " = " << res/9 << " x 9\n";
		
		cin >> n;
	}
}