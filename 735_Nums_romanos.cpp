#include <iostream>
#include <unordered_map>

using namespace std;
using lli = long long int;

int RtoI(string c) {
	unordered_map<char, int> t = { { 'I' , 1 }, { 'V' , 5 }, { 'X' , 10 }, { 'L' , 50 }, { 'C' , 100 }, { 'D' , 500 }, { 'M' , 1000 } };

	int ret = t[c.back()];
	for(int i = c.length()-2; i>= 0; i--) {
		ret += t[c[i]] < t[c[i+1]] ? -t[c[i]] : t[c[i]];
	}
	return ret;
}

string ItoR(int a) {
	string ret;
    string M[] = {"","M","MM","MMM"};
    string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    ret = M[a/1000]+C[(a%1000)/100]+X[(a%100)/10]+I[(a%10)];
	return ret;
}

int main() {
	string c;
	cin >> c;
	while(cin) {
		int a = RtoI(c);
		a++;
		cout << ItoR(a) << '\n';
		cin >> c;
	}
}