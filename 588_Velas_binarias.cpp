// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

typedef long long int lli;

string bin(lli vela)
{
	string ret;
	char aux = '0' + vela%2;
	if(vela >1)
		ret = bin(vela/2) + aux;
	else
		ret = aux;
	return ret;
}

int main()
{
	lli vela;
	cin>>vela;
	while(vela!=0)
	{
		string binario = bin(vela);
		string reverse = "";
		
		bool encontrado = false;
		for(int i = binario.size()-1; i >=0 && !encontrado; i--)
		{
			if(binario[i] == '0')
			{
				
			}
			else
			{
				encontrado = true;
				string aux = "";
				for(int j = 0; j <= i; j++)
				{
					aux += binario[j];
					reverse = binario[j] + reverse;
				}
				binario = aux;
			}
		}
		
		if(binario == reverse)
			cout << "SI\n";
		else
			cout << "NO\n";
		
		cin >> vela;
	}
}