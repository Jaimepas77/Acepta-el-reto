// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int a, b;
		string aux;
		cin >> a >> aux >> b;
		if(a >= b)
			cout << "BIEN\n";
		else
			cout << "MAL\n";
	}
}