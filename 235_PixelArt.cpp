// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

using lli = long long int;

int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	lli f, col;
	cin >> f >> col;
	while(f != 0) {
		map<string, vector<pair<lli, lli>>>m;
		for(lli i = 0; i < f; i++) {
			string a, b, c;
			cin >> a >> b >> c;
			for(lli j = 0; j < col; j++) {
				string cube = a.substr(j*3, 3) + b.substr(j*3, 3) + c.substr(j*3, 3);
				m[cube].push_back({i, j});
			}
		}
		
		lli n;
		cin >> n;
		while(n--) {
			string a, b, c;
			cin >> a >> b >> c;
			
			string cube = a + b + c;
			if(m[cube].size() > 0) {
				cout << m[cube][0].first+1 << ' ' << m[cube][0].second+1 << '\n';
			}
			else {
				cout << "NO SE USA\n";
			}
		}
		
		cin >> f >> col;
	}
}