// Usuario de Acepta el reto: jjjjjjjp022

#include <iostream>
#include <algorithm>

typedef long long int lli;

using namespace std;

int procesar() {
	char c;
	cin >> c;
	if(c == '.')
		return 0;
	else {
		return max(procesar(), procesar())+1;
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a;
	cin >> a;
	while(a--) {
		cout << procesar() << '\n';
	}
}