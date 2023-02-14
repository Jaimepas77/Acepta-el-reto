// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using lli = long long int;

int main() {
	int n;
	cin >> n;
	while(n--) {
		vector< pair<lli, pair<string, lli>> >v;//First - num; Second - instr
		unordered_map<lli, lli> num;
		lli act = 10;//Line counter
		
		lli a;
		cin >> a;
		while(a != 0) {
			num[a] = act;
			a = act;
			string b;
			lli c = -1;
			cin >> b;
			if(b != "RETURN")
				cin >> c;
			v.push_back({a, {b, c}});
			
			act += 10;
			cin >> a;
		}
		
		//print sol
		for(const auto &x:v) {
			cout << x.first << ' ' << x.second.first;
			if(x.second.second > -1) {
				cout << ' ' << num[x.second.second];
			}
			cout << '\n';
		}
		
		cout << "---\n";
	}
}