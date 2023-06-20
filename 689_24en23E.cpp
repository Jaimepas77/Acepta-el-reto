// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;
using lli = long long int;

pair<lli, lli> colegas(lli p, map<lli, vector<lli>> &vistos, set<lli> &pas) {
	pas.insert(p);
	lli grupoA = 1, grupoB = 0;
	
	//Recorrer enemigos bla bla bla
	//grupoB = vistos[p].size();
	for(auto &x:vistos[p]) {
		if(pas.count(x) == 0) {
			pair <lli, lli> aux = colegas(x, vistos, pas);
			grupoB += aux.first;
			grupoA += aux.second;
		}
	}
	
	return {grupoA, grupoB};
}

int main() {
	lli a, b, c;
	cin >> a >> b >> c;
	while(cin) {
		map<lli, vector<lli>> vistos;
		
		lli x, y;
		for(lli i = 0; i < b; i++) {
			cin >> x >> y;
			vistos[x].push_back(y);
			vistos[y].push_back(x);
		}
		
		//Puedo invitar a los que no se han metido en ninguna pelea y 
		//a la mitad más grande de cada grupo en las peleas
		lli noVistos = a - vistos.size();
		vector<pair<lli, lli>> v;
		set<lli> pas;
		for(auto &caso : vistos) {
			if(pas.count(caso.first) == 0) {
				pair <lli, lli> aux = colegas(caso.first, vistos, pas);//Colegas debe eliminar el rastro de ese grupo (vectores a 0)
				v.push_back(aux);
			}
		}
		
		//Colocar al max num de gente sin pasarse
		vector<lli>aux(c+1, 0);
		vector<vector<lli>> aforo(v.size(), aux);
		for(lli i = 0; i < v.size(); i++){
			//Cada grupo
			
			for(lli j = 1; j <= c; j++) {
				//Cada aforo
				lli prev = 0;
				if(i > 0) {
					prev = aforo[i-1][j];
				}
				lli ant1 = 0;
				if( j >= v[i].first){
					ant1 = v[i].first;
				}
				if(i > 0 && j >= v[i].first) {
					ant1 = aforo[i-1][j-v[i].first] + v[i].first;
				}
				
				lli ant2 = 0;
				if( j >= v[i].second){
					ant2 = v[i].second;
				}
				if(i > 0 && j >= v[i].second) {
					ant2 = aforo[i-1][j-v[i].second] + v[i].second;
				}
				
				aforo[i][j] = max(prev, max(ant1, ant2));
				//cout << aforo[i][j] << ' ';
			}
			//cout << endl;
		}
		
		if(v.size() > 0)
			cout << min(aforo[v.size()-1][c]+noVistos, c) << '\n';
		else
			cout << min(a, c) << '\n';
		
		cin >> a >> b >> c;
	}
}