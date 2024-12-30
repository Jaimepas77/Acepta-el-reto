// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;
using lli = long long int;

bool inside(int x, int y, int h, int w) {
	return x >= 0 && y >= 0 && x < h && y < w;
}

void cortarCesped(vector<vector<bool>> &m, int x, int y) {
	vector<pair<int, int>>cola;
	cola.push_back({x, y});
	m[x][y] = false;
	while(!cola.empty()) {
		pair<int, int> act = cola[cola.size()-1];
		// cout << act.first << '-' << act.second << endl;
		// cin.ignore();
		cola.pop_back();
		int uno[4] = {1, 0, -1, 0};
		int dos[4] = {0, 1, 0, -1};
		for(int i = 0; i < 4; i++) {
			int a = uno[i]+act.first;
			int b = dos[i]+act.second;
			
			if(inside(a, b, m.size(), m[0].size()) && m[a][b]) {
				cola.push_back({a, b});
				m[a][b] = false;
			}
		}
	}
}

int main() {
	int h, w;
	cin >> h >> w;
	while(cin) {
		vector<bool>v(w);
		vector<vector<bool>>m(h, v);
		for(int i = 0; i < h; i++) {
			for(int j = 0; j < w; j++) {
				char tmp;
				cin >> tmp;
				m[i][j] = tmp == '#';
			}
		}
		
		lli sol = 0;
		for(int i = 0; i < h; i++) {
			for(int j = 0; j < w; j++) {
				if(m[i][j]) {
					sol++;
					//Eliminar zona con BFS
					cortarCesped(m, i, j);
				}
			}
		}
		
		cout << sol << '\n';
		
		cin >> h >> w;
	}
}