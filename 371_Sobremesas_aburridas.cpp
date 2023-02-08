// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <utility>

using namespace std;

typedef long long int lli;

int f(int n)
{
	int ret = 0;
	while(n>0)
	{
		ret += n;
		n--;
	}
	return ret;
}

int main()
{
	int num;
	cin >> num;
	while (num != 0)
	{
		cout << 3 * f(num) << endl;
		
		cin >> num;
	}
}