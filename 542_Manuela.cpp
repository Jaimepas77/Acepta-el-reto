// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
//#include <string>

using namespace std;

void ordenar(int& a, int& b, int& c);

int main()
{
	int casos;
	cin >> casos;
	for (int i = 0; i < casos; i++)
	{
		int a, b, c, z1, z2, z3;
		cin >> a >> b >> c >> z1 >> z2 >> z3;
		ordenar(a, b, c);
		ordenar(z1, z2, z3);
		if (a < z1 && b < z2 && c < z3)
		{
			cout << "SIRVE\n";

		}
		else
			cout << "NO SIRVE\n";
	}
}

void ordenar(int& a, int& b, int& c)
{
	
	if (a < b)
	{
		int d;
		d = a;
		a = b;
		b = d;
	}
	if (b < c)
	{
		int d;
		d = b;
		b = c;
		c = d;
	}
	if (a < b)
	{
		int d;
		d = a;
		a = b;
		b = d;
	}
}