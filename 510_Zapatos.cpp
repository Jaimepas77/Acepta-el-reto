// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n != 0)
	{
		vector <int> pos, neg;
		vector <bool> up;//Si ese que toca es positivo o no;
		while(n--)
		{
			int aux;
			cin >> aux;
			if(aux > 0)
			{
				pos.push_back(aux);
				up.push_back(true);
			}
			else{
				neg.push_back(aux);
				up.push_back(false);
			}
		}
		
		sort(pos.begin(), pos.end());
		sort(neg.begin(), neg.end());
		
		int x = 0;
		for(int i = 0; i < up.size(); i++)
		{
			if(up[i])
			{
				cout << pos[x++];
			}
			else
			{
				cout << neg[neg.size()-1];
				neg.pop_back();
			}
			if(i != up.size()-1)
				cout << " ";
		}
		cout << '\n';
			
		cin >> n;
	}
}