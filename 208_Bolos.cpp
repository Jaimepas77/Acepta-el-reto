// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

typedef long long int lli;

int main()
{
	lli a, b;
	cin >> a >> b;
	while(a != 0 || b != 0)
	{
		/*b = a-b+1;//Base de los bolos tirados
		lli todos = a*(a+1)/2;
		lli tirados = b*(b+1)/2;
		cout << todos-tirados << '\n';*/
		b--;
		lli todo = b*(a+a-b+1);
		cout << todo/2 << '\n';
		
		cin >> a >> b;
	}
}