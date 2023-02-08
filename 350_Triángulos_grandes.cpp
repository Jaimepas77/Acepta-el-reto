// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>

using namespace std;

int main()
{
	int uno, dos;
	cin >> uno >> dos;
	if (uno != 0 || dos != 0)
	{
		float result = uno * dos / 2.0;
		cout.precision(1);
		cout << fixed << result << endl;
		main();
	}
}