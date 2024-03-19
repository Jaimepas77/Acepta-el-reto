#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using lli = long long int;

int main() 
{
	lli n;
	cin >> n;
	while(n != 0)
	{
		
		vector<lli>sol;
		
		//Solución (ojo a 2-7 -> numCapa == 1)
		
		lli numCapa = 1, inferior = 2, superior = 8, restador = 0, sumador = 6;
		if(n == 1) {
			sol = {2, 3, 4, 5, 6, 7};
		}
		else {
			while(n >= superior) {
				lli ant = inferior;
				inferior = superior;
				superior += (superior-ant) + 6;
				restador += 6;
				sumador = restador + 6;
				numCapa++;
			}
			
			//Lados
			if(n == superior-1) {
				sol.push_back(inferior);
			}
			else {
				sol.push_back(n+1);
			}
			
			if(n == inferior) {
				sol.push_back(superior-1);
			}
			else {
				sol.push_back(n-1);
			}
			
			//Inferior (resta) y superior (suma)
			lli punto = (n-inferior);
			bool exacto = punto%numCapa==0;
			
			lli resta = restador + punto/numCapa;
			if(numCapa == 1) resta++;
			
			lli suma = sumador + punto/numCapa;
			
			if(exacto) {
				sol.push_back(n-resta);
				sol.push_back(n+suma);
				sol.push_back(n+suma+1);
				if(n == inferior) {
					sol.push_back(n+suma-1+sumador+6);
				}
				else {
					sol.push_back(n+suma-1);
				}
			}
			else {
				sol.push_back(n+suma);
				if(n != superior-1) {
					sol.push_back(n-resta);
				}
				else {
					sol.push_back(n-resta-restador);//Caso extremo
				}
				
				sol.push_back(n-resta-1);
				sol.push_back(n+suma+1);
			}
		}
		
		////
		
		sort(sol.begin(), sol.end());
		for(int i = 0; i < sol.size()-1; i++) {
			cout << sol[i] << ' ';
		}
		cout << sol[sol.size()-1] << '\n';
		cin >> n;
	}
}