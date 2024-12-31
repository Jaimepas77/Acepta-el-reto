#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

using lli = long long int;

int main()
{
	lli z;
	cin >> z;
	while(z != 0) {
		vector<pair<lli, lli>>v(z);
		for(auto &x:v)
			cin >> x.first >> x.second;
		
		lli tmp, sol = 0, i = 0;
		cin >> tmp;
		while(tmp) {
			if(tmp < v[0].first)
				sol++;
			else {
				while(v[i].first <= tmp) {
					i++;
				}
				if(v[i-1].second < tmp)
					sol++;
			}
			
			cin >> tmp;
		}
		
		cout << sol << '\n';
		
		cin >> z;
	}
}