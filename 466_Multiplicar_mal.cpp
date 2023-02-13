// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--) {
		string a, b;
		cin >> a >> b;
		
		//Resolver (Multiplicar al estilo de Celia)
		vector<int> sol(max(a.size(), b.size()) + 1, -1);
		int llevada = 0;
		for(int i = 1; i <= max(a.size(), b.size()); i++) {
			int uno = 0, dos = 0; // Los nums a multiplicar
			if(i <= a.size())
				uno = a[a.size()-i] - '0';
			if(i <= b.size())
				dos = b[b.size()-i] - '0';
			
			int tres = uno * dos + llevada;//Paso actual
			// cout << "result: " << tres << '\n';
			
			sol[sol.size()-i] = tres%10;//Guardado actual
			llevada = tres/10;//Apuntar llevada
		}
		if(llevada > 0)
			sol[0] = llevada;
		
		//Imprimir solución
		for(const auto &x:sol)
			if(x != -1)
				cout << x;
		cout << '\n';
	}
}