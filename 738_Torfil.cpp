#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
using lli = long long int;
int main() {
	lli n, p;
	cin >> n;
	while(cin) {
		cin >> p;
		unordered_set<lli>filas;//Filas alcanzables
		unordered_set<lli>diags;//Diagonales alcanzables (numeradas de 1 a n+n)
		lli alcanzable = 0;
		for(lli i = 0; i < p; i++) {
			lli aux1, aux2;//Fila, columna
			cin >> aux1 >> aux2;
			aux2 = n-aux2+1;//Adaptación de contar desde abajo a contar desde arriba las filas
			
			if(filas.count(aux1) == 0) {
				filas.insert(aux1);
				alcanzable += n;//Alcanzable la fila -> sumarla
			}
			if(diags.count(aux1+aux2) == 0) {
				diags.insert(aux1+aux2);
			}
		}
		
		vector<lli>acumFilas(n+1, 0);//Para ganar eficiencia en el cálculo de filas existentes entre dos filas concretas
		for(lli i = 1; i <= n; i++) {
			acumFilas[i] = acumFilas[i-1] + filas.count(i);
		}
		
		for(auto &x:diags) {//Añadir diagonales en tramos que no pisan filas
			lli sup, inf;//Filas superior e inferior que pasa esa diagonal
			sup = x-1 <= n ? 1 : x-n;
			inf = x-1 >= n ? n : x-1;
			
			alcanzable += inf-sup+1 - (acumFilas[inf]-acumFilas[sup-1]);
		}
		
		cout << n*n-alcanzable << '\n';//Las no alcanzables es el tam del tablero menos las alcanzables
		
		cin >> n;
	}
}