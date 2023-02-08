// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
//#include <string>

using namespace std;

void ordenar(long int& a, long int& b);
int mcd(long int a, long int b);

int main()
{
	long int a , b, c, mcd1, out = 0;
	
		cin >> a >> b >> c;
		mcd1 = (mcd(a, mcd(b, c)));
		if (mcd1 != 0)
		{
		out = a / mcd1 + b / mcd1 + c / mcd1;
		
		
			cout << out << "\n";
		}
		if (a != 0 || b != 0 || c != 0)
		{
		main();
	}
}

void ordenar(long int& a, long int& b)
{
	if (a < b)
	{
		int c;
		c = a;
		a = b;
		b = c;
	}
}

int mcd(long int a, long int b)
{
	ordenar(a, b);
	while (b != 0)
	{
		long int c;
		c = b;
		b = a % b;
		a = c;
	}
	return a;
}