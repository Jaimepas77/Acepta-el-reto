//jjjjjjjp022

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
using lli = long long int;

bool customCompare(const std::pair<lli, lli>& a, const std::pair<lli, lli>& b) {
    return 1 + ((a.first-1)/a.second) > 1 + ((b.first-1)/b.second);
}

int main() {
	lli p, e;
	cin >> p >> e;
	while(cin) {
		//p -= e;//Se va una persona a cada enemigo mínimo
		lli sum = 0;
		vector<pair<lli, lli>>v(e);//Nº enemigos - nº personas
		for(pair<lli, lli> &x:v) {
			cin >> x.first;
			sum += x.first;
			x.second = 0;
		}
		
		//Ordenar por el first
		sort(v.begin(), v.end(), [](const std::pair<lli, lli>& a, const std::pair<lli, lli>& b) {
			return a.first < b.first;
		});
		//cout << "Hey: " << v[0].first << endl;
		
		//Asignar el rate
		lli p2 = p;//Personas restantes
		for(auto &x:v) {
			lli rate = (p*x.first)/sum;
			x.second = max(rate, (lli)1);
			p2 -= x.second;
			
			if(x.second > rate) {//Delete from the calculations
				p -= x.second;
				sum -= x.first;
			}
		}
		
		//Sort(descendente por ratio de ceil(enemigos/personas))
		sort(v.begin(), v.end(), customCompare);
		
		//Asignar los restantes
		int i = 0;
		while(p2 > 0) {
			v[i].second++;
			i = (i + 1)%v.size();
			p2--;
		}
		
		//Sort(descendente por ratio de ceil(enemigos/personas))
		sort(v.begin(), v.end(), customCompare);

		cout << 1 + ((v[0].first-1)/v[0].second) << '\n';
		
		cin >> p >> e;
	}
}