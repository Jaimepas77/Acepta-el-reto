// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <utility>

using namespace std;

typedef long long int lli;

int main()
{
	int num;
	cin >> num;
	for(int i = 0; i < num; i++)
	{
		lli n, m;
		cin >> n;
		cin.get();
		cin >> m;
		if(min(n,m)%2 == 0 && abs(n - m) == 1)
			cout << "SI\n";
		else
			cout << "NO\n";
	}
}