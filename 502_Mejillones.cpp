// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <algorithm>
#include <vector>
typedef long long int lli;

using namespace std;

int main()
{
	int n ;
	cin >> n;
	while(cin)
	{
		vector <int> v;
		while(n--)
		{
			lli aux;
			cin >> aux;
			auto it = upper_bound(v.begin(), v.end(), aux);
			if(it != v.end())
				*it = aux;
			else
				v.push_back(aux);
		}
		cout << v.size() << '\n';
		
		cin >> n;
	}
}