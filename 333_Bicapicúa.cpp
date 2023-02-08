// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <string>

using namespace std;

bool capicua(string a)
{
	if (a[0] == '0' && a.size() != 1)
		return false;

	for (int i = 0; i < a.size() / 2; i++)
		if (a[i] != a[a.size() - 1 - i])
			return false;
	
	return true;
}

int main()
{
	string caso;
	cin >> caso;
	while (caso != "0")
	{
		bool sol = false;
		for (int i = 0; i < caso.size()-1 && !sol; i++)
			sol = capicua( caso.substr(0, i + 1)) && capicua(caso.substr(i + 1, caso.size() - (i + 1)) );

		if (sol)
			cout << "SI\n";
		else
			cout << "NO\n";

		cin >> caso;
	}
}