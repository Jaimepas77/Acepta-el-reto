// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	while(a--)
	{
		int uno, dos;
		cin >> uno >> dos;
		if(uno+dos >= 0)
			cout << "SI\n";
		else
			cout << "NO\n";
	}
}