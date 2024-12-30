// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using lli = long long int;

bool cmp(pair<lli, lli> i, pair<lli, lli> j) {
    if(i.first == j.first) 
        return i.second < j.second;
    return i.first > j.first;
}

int main() {
	int a, b;
	cin >> a >> b;
	while(a != 0 || b != 0) {
		vector<pair<lli, lli>> v(b);
		for(auto &x : v)
			cin >> x.first >> x.second;
		
		sort(v.begin(), v.end(), cmp);
		int num = 0;
		while(num < v.size() && a > 0) {
			if(v[num].second <= a) {
				a -= v[num].second;
				num++;
			}
			else
				break;
		}
		
		cout << num << ' ' << a << '\n';
		cin >> a >> b;
	}
}