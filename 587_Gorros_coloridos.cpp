// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

typedef long long int lli;

int main()
{
	int casos;
	cin >> casos;
	for (int i = 0; i < casos;i++)
	{
		string gorro;
		cin >> gorro;
		lli acum = gorro.size()/2;
		for(int j = 0; j < gorro.size()-1;j+=2)
		{
			if(gorro[j] == gorro[j+1])
				acum++;
		}
		cout << acum << endl;
	}
}