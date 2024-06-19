// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

bool dentro(pair<int, int> place, int x, int y) {
	return place.first >= 0 && place.first < x && place.second >= 0 && place.second < y;
}

int main() {
	lli a, b;
	cin >> a >> b;
	while(a != 0) {
		vector<char> v(b);
		vector<vector<char>>m(a, v);
		for(auto &x:m) {
			for(auto &y:x) {
				cin >> y;
			}
		}
		
		bool sol = false;
		vector<pair<int, int>>p; //Pila
		p.push_back({0, 0});
		while(p.size() > 0 && !sol) {
			pair<int, int>act = p[p.size()-1]; //Nodo actual
			p.pop_back();
			if(act.first == a-1 && act.second == b-1)
				sol = true;
			
			m[act.first][act.second] = 'V';
			vector<int>x = {0,-1, 1, 0};
			vector<int>y = {-1, 0, 0, 1};
			for(int i = 0; i < x.size(); i++) {
				pair<int, int> visit = {act.first+x[i], act.second+y[i]};
				if(dentro(visit, a, b) && m[visit.first][visit.second] == '.') {
					m[visit.first][visit.second] = 'Q';
					p.push_back(visit);
				}
			}
		}
		
		if(sol)
			cout << "SI\n";
		else
			cout << "NO\n";
		
		cin >> a >> b;
	}
}