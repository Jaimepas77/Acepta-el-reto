// Usuario de Acepta el reto: jjjjjjjp022
//BFS es un algoritmo de búsqueda que permite probar que puntos de un grafo están conectados a un determinado punto.

#include <iostream>
#include <vector>

typedef long long int lli;

using namespace std;

//sobrecarga de la suma de los operadores
pair <int, int> operator +(const pair <int, int> &p1,const pair <int, int> &p2)
{
	pair <int, int> res = {p1.first + p2.first, p1.second + p2.second };
    return res;
}

bool valid(pair <int, int> n, const vector <vector <char>>& map)
{
	//Ver si está dentro del tablero y no hay muro en esa posición
	bool ret;
	
	if(n.first >= 0 && n.second >= 0 && n.first < map.size() && n.second < map[0].size() &&
	map[n.first][n.second] != ' ')
		ret = true;
	else
		ret = false;
	
	return ret;
}

int bfs(const vector <vector <char>>& map, pair <int, int> A, vector <vector <bool>> &visit)//Funciona: dice si hay camino entre a y b (siendo # los muros)
{
	bool connexion = false;//No es necesaria...
	
	pair<int, int> dir[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
	
	
	
	vector <pair<int, int>>v;//Queue with the positions analised in bfs. Add with push.
	lli cont = 0;//Counter with the start point on the vector (the point where the bottom of the queue is located
	v.push_back(A);
	visit[A.first][A.second] = true;
	while(cont < v.size())// && !visit[B.first][B.second])
	{
		for(int i = 0; i < 4;i++)
		{
			if(valid(v[cont]+dir[i], map) && !visit[v[cont].first+dir[i].first][v[cont].second+dir[i].second])//Si la pos es visitable
			{
				v.push_back(v[cont] + dir[i]);//Se añade a la cola
				visit[v[cont].first+dir[i].first][v[cont].second+dir[i].second] = true;//Se confirma que ha sido y se puede visitar
			}
		}
		cont++;
	}
	
	/* for(pair <int, int> &x : v)
		cout << x.first << x.second << " ";
	cout << endl;
	 */
	return v.size();
}

int main()
{
	pair <int, int>tam;
	cin >>tam.first;
	while(cin)
	{
		//Lectura
		
		cin >> tam.second;
		
		//pair <int, int> A, B;//Caperucita y el lobo
		cin.get();
		
		vector <char>aux(tam.second);
		vector<vector<char>>map(tam.first);
		for(int i = 0; i < map.size();i++)
		{
			for(int j = 0; j < aux.size(); j++)//Lectura de cada fila
			{
				cin.get(aux[j]);
				/* if(aux[j] == 'C')
					A = {i, j};
				else if (aux[j] == 'L')
					B = {i, j}; */
			}
			cin.get();
			map[i] = aux;//Guardado de cada fila
		}
		
		//Procesado de la solución
		//Mapa de sitios visitados
		vector <bool> aux2(tam.second, false);
		vector <vector <bool>> visit(map.size(), aux2);
		
		int max = 0;
		for(int i = 0;i < tam.first;i++)
		{
			for(int j = 0; j < tam.second;j++)
			{
				if(!visit[i][j] && map[i][j] != ' ')
				{
					int act = bfs(map, {i, j}, visit);
					if(act > max)
						max = act;
				}					
				
			}
		}
		
		//Impresión del resultado
		cout << max << endl;
		cin >>tam.first;
	}
}