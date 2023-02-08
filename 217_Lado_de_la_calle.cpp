// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;


int main()
{

	int num;
	cin >> num;
	if (num != 0)
	{
		if (num % 2 == 0)
		{
			cout << "DERECHA" << endl;
		}
		else
		{
			cout << "IZQUIERDA" << endl;
		}
		main();
	}
}