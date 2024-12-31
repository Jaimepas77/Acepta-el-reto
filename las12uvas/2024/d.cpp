#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

using lli = long long int;

int main()
{
	int z;
	cin >> z;
	while(z != 0) {
		map<lli, lli>m;
		map<lli, lli>dist;
		for(lli i = 1; i <= z; i++) {
			lli led;
			cin >> led;
			if(m[led] == 0) {
				m[led] = i;
			}
			else {
				// cout << "Led: " << led << endl;
				// cout << "Pos: " << m[led] << endl;
				dist[led] = max(dist[led], i-m[led]);
				//m[led] = i;
			}
		}
		
		lli ret = 0;
		for(auto &x:dist) {
			ret += x.second;
		}
		cout << ret << '\n';
		
		cin >> z;
	}
}