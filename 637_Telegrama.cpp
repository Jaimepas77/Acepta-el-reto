#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>

using namespace std;
using lli = long long int;

int main()
{
	unordered_map<char, int> letra;
	letra['A'] = 5;
	letra['B'] = 9;
	letra['C'] = 11;
	letra['D'] = 7;
	letra['E'] = 1;
	letra['F'] = 9;
	letra['G'] = 9;
	letra['H'] = 7;
	letra['I'] = 3;
	letra['J'] = 13;
	letra['K'] = 9;
	letra['L'] = 9;
	letra['M'] = 7;
	letra['N'] = 5;
	letra['O'] = 11;
	letra['P'] = 11;
	letra['Q'] = 13;
	letra['R'] = 7;
	letra['S'] = 5;
	letra['T'] = 3;
	letra['U'] = 7;
	letra['V'] = 9;
	letra['W'] = 9;
	letra['X'] = 11;
	letra['Y'] = 13;
	letra['Z'] = 11;
	letra['!'] = 19;
	letra['?'] = 15;
	int n;
	cin >> n;
	cin.ignore();
	while(n--)
	{
		string line;
		getline(cin, line);
		lli cont = 0;
		int longitud = line.size();
		//out << longitud;
		for(int i = 0; i < longitud;i++)
		{
			if(line[i] == ' ')
				cont+=2;//2 + 3 = 5
			else
				cont += letra[line[i]] + 3;
		}
		cont-=3;
		cout << cont << '\n';
	}
}