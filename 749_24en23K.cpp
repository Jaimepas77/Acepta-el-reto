// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <unordered_map>

using namespace std;
using lli = long long int;

bool dentro(pair<lli, lli> place, lli x, lli y) {
	return place.first >= 0 && place.first < x && place.second >= 0 && place.second < y;
}

int main() {
	lli a, b, c;
	cin >> a >> b >> c;
	while(a != 0) {
		unordered_map<lli, unordered_map<lli, bool>>m;
		lli sol = (a-1)*b + (b-1)*a;
		while(c--) {
			lli x, y;
			cin >> x >> y;
			x--;
			y--;
			m[y][x] = true;
			vector<int>modx = {0,-1, 1, 0};
			vector<int>mody = {-1, 0, 0, 1};
			
			for(int i = 0; i < modx.size(); i++) {
				lli posy = y+mody[i];
				lli posx = x+modx[i];
				//cout <<posx  <<' '<< posy<< '\n';
				if(dentro({posx, posy}, a, b) && 
					(m.count(posy) == 0 || m[posy].count(posx) == 0)) {
					sol--;
					//cout << "--\n";
				}
			}
		}
		
		cout << sol << '\n';
		
		cin >> a >> b >> c;
	}
}