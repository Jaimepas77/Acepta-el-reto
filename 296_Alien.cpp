#include <iostream>
#include <map>

using namespace std;
using lli = long int;

int main() {
	lli ini, fin, n;
	cin >> ini >> fin >> n;
	while(ini != 0 || fin != 0 || n != 0) {
		map<lli, lli>tr;
		while(n--) {
			lli a, b;
			cin >> a >> b;
			tr[a] = max(tr[a], b);
			// cout << "tr: " << tr[a] << endl;
		}
		
		lli sol = 1;
		bool ret = true;
		
		lli lim = ini;
		lli next = ini;
		for(auto &x:tr) {
			if(x.first <= lim) {
				next = max(next, x.second);
			}
			else {
				if(next > lim) {//Si el sig lim está por delante del anterior
					lim = next;
					if(x.first <= lim)
						next = x.second;

					if(lim < fin)
						sol++;
					else
						break;
				}
				else {
					ret = false;
					break;
				}
			}
		}
		lim = max(lim, next);
		
		if(ret && lim >= fin)
			cout << sol << '\n';
		else
			cout << "Imposible\n";
		
		cin >> ini >> fin >> n;
	}
}