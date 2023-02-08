// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

using lli = long long int;

char down(const char &c) {
	if(c <= 'Z')
		return c + ('a'-'A');
	else
		return c;
}

bool isAlf(const char &c) {
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool cmp(const string &uno, const string &dos) {
	lli i = 0;
	lli j = 0;
	// cout << uno << endl;
	// cout << dos << endl;
	while (i < uno.size() && j < dos.size()) {
		if(!isAlf(uno[i])) {
			i++;
			continue;
		}
		else if (!isAlf(dos[j])) {
			j++;
			continue;
		}
		else if(down(uno[i]) != down(dos[j])) {
			// cout << down(uno[i]) << ' ' << down(dos[j]) << endl;
			return false;
		}
		
		i++;
		j++;
	}
	
	while (i < uno.size()) {
		if(isAlf(uno[i]))
			return false;
		i++;
	}
	while (j < dos.size()) {
		if(isAlf(dos[j]))
			return false;
		j++;
	}
	
	return true;
}

int  main() {
	int n;
	cin >> n;
	cin.ignore();//'\n'
	while(n--) {
		
		string uno="", dos="";
		// getline(cin, uno);
		// getline(cin, dos);
		char aux;
		aux = getchar();
		while(aux != '\n') {
			uno.push_back(aux);
			aux = getchar();
		}
		aux = getchar();
		while(aux != '\n') {
			dos.push_back(aux);
			aux = getchar();
		}
		
		if(cmp(uno, dos))
			cout << "SI\n";
		else
			cout << "NO\n";
	}
}