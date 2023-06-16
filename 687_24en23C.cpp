// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;
using lli = long long int;

int main() {
	int n;
	cin >> n;
	while(n != 0) {
		
		lli cont = 0;
		vector<vector<int>>v(n+1);
		int a, b;
		cin >> a >> b;
		while(a!= 0) {
			if(a != b) {
			v[a].push_back(b);
			v[b].push_back(a);
			}
			else {
				cont++;
			}
			cin >> a >> b;
		}
		unordered_set<int> pasados;
		vector<int>frontera(1, 1);
		while(frontera.size() > 0) {
			int act = frontera[frontera.size()-1];
			frontera.pop_back();
			
				
			//cout << "act: " << act << endl;
			
			for(int i = 0; i < v[act].size(); i++) {
				//cout << "mirando " << v[act][i] << endl;
				if(pasados.count(v[act][i]) == 0) {
					frontera.push_back(v[act][i]);
					
					pasados.insert(v[act][i]);
				}
				else {
					cont++;
				}
				
				//Borrar enlace usado en destino
				int j = 0;
				while(j < v[v[act][i]].size() && v[v[act][i]][j] != act) {
					j++;
				}
				if(j < v[v[act][i]].size())
					v[v[act][i]].erase(v[v[act][i]].begin() + j);
				/*else
					cout << "ERROR";*/
			}
		}
		
		cout << cont << '\n';
		
		cin >> n;
	}
}