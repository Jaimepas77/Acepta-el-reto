#include <iostream>
#include <vector>
#include <algorithm>

using lli = long long int;

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int c;
		cin >> c;
		int siglo = c / 100;
		if(c%100 != 0)
			siglo++;
		
		cout << siglo << '\n';
	}
}