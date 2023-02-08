#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using lli = long long int;

int main()
{
	int n;
	cin >> n;
	while(cin)
	{
		vector<lli>v(n);
		for(auto &x : v)
			cin >> x;
		sort(v.begin(), v.end());
		lli reg = 0;
		for(int i = 0; i < v.size(); i++)
		{
			if(i%3 == 2)
				reg += v[v.size()-1-i];
		}
		
		cout << reg << '\n';
		
		cin >> n;
	}
}