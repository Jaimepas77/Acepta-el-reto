#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>

using lli = long long int;
using namespace std;

int main() {
	lli canales, people;
	cin >> canales >> people;
	while(cin) {
		map<lli, set<lli>>m;
		set<lli>inestable;
		for(lli i = 0; i < people; i++) {
			lli a, b;
			cin >> a >> b;
			m[a].insert(b);
			//goo[b].insert(a);
			inestable.insert(b);
		}
		
		lli estable = canales, bloqueo = 0, depende = 0;
		
		set<lli> visited;
		queue<pair<lli, set<lli>>>q;
		for(auto &x: m) {
			if(visited.count(x.first) == 0)
				q.push({x.first, {x.first}});
			while(!q.empty()) {
				auto act = q.front();
				q.pop();
				for(auto &y:m[act.first]) {
					if(m[y].count) {
						m[y].insert(act.second.begin(), ac.second.end());
					}
					if(estab) {
						
					}
				}
			}
		}
		
		for(auto &x: m) {
			bool b = false, e = false;
			if(x.second.count(x.first) > 0) {
				b = true;
			}
			if(inestable.count(x.first) == 0) {
				e = true;
			}
			
			if(b || !e) {
				estable--;
			}
			
			if(e && b)
				depende++;
			else if(b)
				bloqueo++;
			/*if(b)
				cout << "Bloqueo: " << x.first << endl;
			if(e)
				cout << "Estable: " << x.first << endl;
			cout << "afectados: ";
			for(const auto& aux:x.second) {
				cout << aux << ' ';
			}
			cout << endl;*/
		}
		
		
		cout << estable << ' ' << bloqueo << ' ' << depende << '\n';
		
		cin >> canales >> people;
	}
}