// Usuario de Acepta el reto: jjjjjjjp022
// Comentario general sobre la solución,
// explicando cómo se resuelve el problema

#include <iostream>
#include <vector>
#include <unordered_set>

typedef long long int lli;

//.h propios o los de las estructuras de datos de clase

using namespace std;

// función que resuelve el problema
// comentario sobre el coste, O(f(N)), donde N es ...
// O(n*l) siendo n el nº de cuerdas disponibles y siendo l la longitud objetivo
bool posible(const vector<pair<int, int>>& cuerdas, int l) {
	vector<bool> posibles(l+1, false);//Vector de longitudes que se pueden conseguir
	for (const auto &x : cuerdas)
	{
		posibles[0] = true;
		for (int i = l; i >= 0; i--)//Se recorre el vector hacia atrás para que lo que se modifique no afecte a las siguientes iteraciones
		{
			if (posibles[i] && i + x.first <= l)
				posibles[i + x.first] = true;
		}
	}

	return posibles[l];
}

lli maneras(const vector<pair<int, int>>& cuerdas, int l)
{
	vector<lli> posibles(l + 1, 0);//Vector de nº de maneras de las que se puede conseguir una longitud
	for (const auto& x : cuerdas)
	{
		posibles[0] = 1;
		for (int i = l; i >= 0; i--)//Se recorre el vector hacia atrás para que lo que se modifique no afecte a las siguientes iteraciones
		{
			if (posibles[i] && i + x.first <= l)
				posibles[i + x.first] += posibles[i];
		}
	}

	return posibles[l];
}

lli minCuerdas(const vector<pair<int, int>>& cuerdas, int l)
{
	vector<lli> posibles(l + 1, -1);//Vector de menor nº de cuerdas con las que se puede conseguir una longitud
	for (const auto& x : cuerdas)
	{
		posibles[0] = 0;
		for (int i = l; i >= 0; i--)//Se recorre el vector hacia atrás para que lo que se modifique no afecte a las siguientes iteraciones
		{
			if (posibles[i] >= 0 && i + x.first <= l && (posibles[i + x.first] > posibles[i]+1 || posibles[i + x.first] == -1)) //Se revisa que se mejore el valor anterior (-1 es que no se había llegado)
				posibles[i + x.first] = posibles[i] + 1;
		}
	}

	return posibles[l];
}

lli minCoste(const vector<pair<int, int>>& cuerdas, int l)
{
	vector<lli> posibles(l + 1, -1);//Vector de menor coste con el que conseguir una longitud
	for (const auto& x : cuerdas)
	{
		posibles[0] = 0;
		for (int i = l; i >= 0; i--)//Se recorre el vector hacia atrás para que lo que se modifique no afecte a las siguientes iteraciones
		{
			if (posibles[i] >= 0 && i + x.first <= l && (posibles[i + x.first] > posibles[i] + x.second || posibles[i + x.first] == -1)) //Se revisa que se mejore el valor anterior (-1 es que no se había llegado)
				posibles[i + x.first] = posibles[i] + x.second;
		}
	}

	return posibles[l];
}

// resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {

	// leer los datos de la entrada
	int n, l;//nº de cuerdas y longitud de la cometa
	cin >> n;

	if (!std::cin)  // fin de la entrada
		return false;

	cin >> l;
	vector<pair<int, int>> v(n);//Cuerdas (pares de longitud-precio)
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}

	bool sol = posible(v, l);

	// escribir sol
	if (sol)
	{
		cout << "SI";
		cout << " " << maneras(v, l);
		cout << " " << minCuerdas(v, l);
		cout << " " << minCoste(v, l);
		cout << '\n';
	}
	else
		cout << "NO\n";

	return true;
}

int main() {

	while (resuelveCaso());
	return 0;
}