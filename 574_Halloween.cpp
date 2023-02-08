// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;

typedef long long int lli;

char resolver(lli n, lli size, lli k, vector <lli> &v)
{
	if(size < k)
	{
		//cout << n << " " << size << " "<< k << '\n';
		//cout << n << " " << size << '\n';
		//system("pause");
		//cout << v[v.size()-1] << '\n';
		v.push_back(v[v.size()-1]*2 + n);
		return resolver(n+1, size*2+n+1+2, k, v);
	}
	else//Resolver con el vector
	{
		if(size == k)
			return 'H';
		
		//cout << n << " " << size << " " << k << '\n';
		
		while(v[n-1] + n < k || k < v[n-1] - 1)
		{
			if(k-(v[n-1] + n) > 0)
				k -= v[n-1] + n;
			//cout << k << '\n';
			n--;
		}
		/*for(int i = 0; i < v.size();i++)
			cout << v[i] << '\n';
		cout << k << '\n';*/
		
		if(v[n-1] + n == k)
			return 'H';
		else if(k == v[n-1] - 1)
			return 'B';
		else
			return 'U';
	}
}

int main()
{
	lli n, k;
	cin >> n >> k;
	while(cin)
	{
		vector <lli> v;
		v.push_back(2);//Posición de la u del primer buh
		cout << resolver(1, 3, k, v) << '\n';
		
		cin >> n >> k;
	}
}