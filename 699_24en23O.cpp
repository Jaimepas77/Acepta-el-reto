// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <string>

using namespace std;
using lli = long long int;

void fabricar(vector<pair<lli, lli>> &v, string &s) {
	lli ant = 0;
	for(lli i = 0; i < s.size(); i++) {
		if(s[i] >= '0' && s[i] <= '9') {
			ant *= 10;
			ant += (s[i]-'0');
		}
		else if(s[i] == 'x') {
			i++;//^
			if(i < s.size() && s[i] == '^') {
				i++;
				lli exp = s[i]-'0';
				i++;
				if(i < s.size() && s[i] != '+'){
					exp *= 10;
					exp += s[i]-'0';
					i++;
				}
				if(ant == 0)
					ant = 1;
				ant *= exp;
				v.push_back({ant, exp-1});
				ant = 0;
			}
			else {
				if(ant == 0)
					ant = 1;
				v.push_back({ant, 0});
				ant = 0;
			}
		}
		else {
			ant = 0;
		}
	}
}

string salida(const vector<pair<lli, lli>> &v) {
	string ret = "";
	for(const auto &x:v) {
		//cout << x.first << ' ' << x.second << ';';
		if(x.second > 1) {
			if(x.first != 1)
				ret += to_string(x.first);
			ret += "x^";
			ret += to_string(x.second);
		}
		else if(x.second == 1) {
			if(x.first != 1)
				ret += to_string(x.first);
			ret += "x";
		}
		else {
			ret += to_string(x.first);
		}
		
		ret += "+";
	}
	if(ret.size() > 0)
		ret.resize(ret.size()-1);
	else
		ret = "0";
	return ret;
}

int main() {
	string x;
	cin >> x;
	while(cin) {
		vector<pair<lli, lli>>v;
		
		fabricar(v, x);
		string out = salida(v);
		
		cout << out << '\n';
		
		cin >> x;
	}
}