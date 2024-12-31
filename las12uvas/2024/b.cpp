#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using lli = long long int;

int main()
{
	int z, y;
	cin >> z >> y;
	while(z!= 0) {
		cout << "[" << z + y*74 << " .. " << z + y*79 << "]\n";
		
		cin >> z >> y;
	}
}