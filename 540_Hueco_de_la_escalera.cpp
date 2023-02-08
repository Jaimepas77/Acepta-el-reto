// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
//#include <string>

using namespace std;


int main()
{
	int casos;
	cin >> casos;
	for (int i = 0; i < casos; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		cout << c * b + d << " " << a * b + (c * b + d) << "\n";
	}
}