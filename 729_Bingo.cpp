#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
using lli = long long int;
int main() {
	lli n;
	cin >> n;
	while(cin) {
		unordered_map<string, lli>quedan;//Nums que quedan a la persona x
		unordered_map<lli, vector<string>> corresp; //Personas a las que corresponde ese num
		while(n--) {
			string p;
			cin >> p;
			lli num;
			cin >> num;
			while(num != 0) {
				corresp[num].push_back(p);
				quedan[p]++;
				
				cin >> num;
			}
		}
		lli nums;
		cin >> nums;
		bool ganado = false;
		vector<string>ganadores;
		//LEER nums
		while(nums--) {
			lli act;
			cin >> act;
			
			for(const auto &x:corresp[act]) {
				quedan[x]--;
				if(!ganado && quedan[x] == 0)
					ganadores.push_back(x);
			}
			
			if(ganadores.size() > 0)
				ganado = true;
		}
		
		sort(ganadores.begin(), ganadores.end());
		if(ganado)
			cout << ganadores[0];
		for(lli i = 1; i < ganadores.size(); i++) {
			cout << ' ' << ganadores[i];
		}
		cout << '\n';
		
		cin >> n;
	}
}