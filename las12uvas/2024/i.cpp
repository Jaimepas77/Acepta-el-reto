#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

using lli = long long int;

int main()
{
	lli f, c;
	cin >> f >> c;
	while(c != 0) {
		vector<pair<lli, lli>>v;
		char tmp;
		while(c--) {
			lli n;
			cin >> n;
			for(lli i = 0; i < n; i++) {
				pair<lli, lli>act;
				cin >> act.first >> tmp >> act.second;
				v.push_back(act);
			}
		}
		sort(v.begin(), v.end());
		
		bool ok = true;
		lli ant = 0;
		for(lli i = 0; i < v.size(); i++) {
			if(ant + 1 < v[i].first) {
				ok = false;
				break;
			}
			else {
				ant = max(ant, v[i].second);
			}
		}
		if(ant < f)
			ok = false;
		
		if(ok)
			cout << "SI\n";
		else
			cout << "NO\n";
		
		cin >> f >> c;
	}
}