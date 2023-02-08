// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

typedef long long int lli;

int main()
{
	int casos;
	cin >> casos;
	for(int i = 0; i < casos; i++)
	{
		lli uno, dos;
		cin >> uno >> dos;
		uno -= (uno+dos)/2;
		cout << uno*100/(uno+dos) << endl;
	}
}