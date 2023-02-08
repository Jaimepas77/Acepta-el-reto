#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n!=0)
	{
		string aux;
		int completo=0, incompleto = 0, repes = 0;
		unordered_map<string, char>  genero;//Genero de cada animal (a, o)
		while(n--)
		{
			cin >> aux;
			char gen = aux[aux.size()-1];
			aux.pop_back();
			//cout << aux << gen;
			if(genero.count(aux))
			{
				if(genero[aux] == gen || genero[aux] == 'c')
				{
					repes++;
				}
				else
				{
					completo++;
					incompleto--;
					genero[aux] = 'c';//Completo
				}
			}
			else
			{
				genero[aux] = gen;
				incompleto++;
			}
		}
		cout << completo << ' ' << incompleto << ' ' << repes << '\n';
		
		cin >> n;
	}
}