// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
using lli = long long int;

bool cmp(const pair<lli, string>& a, const pair<lli, string>& b)
{
    return a.first < b.first || (a.first == b.first && a.second > b.second);
}

int main() {
	int n;
	cin >> n;
	while(n != 0) {
		lli aux;
		string p;
		char c;
		unordered_map<string, lli> tiempo;
		while(n--) {
			cin >> aux;
			cin.get(c);
			getline(cin, p);
			tiempo[p] += aux;
		}
		
		vector<pair<lli, string>>v;
		for(auto &x:tiempo) {
			v.push_back({x.second, x.first});
		}
		
		sort(v.begin(), v.end(), cmp);
		int cont = 0;
		for(int i = v.size()-1; i >= 0 && cont < 3; i--) {
			if(v[i].first >= 30 && cont < 3) {
				cout << v[i].second << '\n';
				cont++;
			}
		}
		cout << "---\n";
		
		cin >> n;
	}
}