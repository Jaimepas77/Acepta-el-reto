#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

using lli = long long int;

lli pDin(vector<lli>& op, lli n, lli k) 
{
	lli perdidas = n % k;
	vector<lli>tmp(op.size(), 0);
	vector<vector<lli>>m(perdidas+1, tmp);
	for (lli i = 0; i <= perdidas; i++) {
		for (lli j = op.size() - 1; j >= 0; j--) {
			lli a = op[j], b = 0;//Opciones a competir (a: cojo, b: salto)
			if (j + k < op.size())
				a = m[i][j + k] + op[j];
			if (i > 0 && j < op.size() - 1)
				b = m[i - 1][j + 1];

			m[i][j] = max(a, b);
		}
	}

	return m[perdidas][0];
}

int main()
{
	lli n, k;
	cin >> n >> k;
	while (n != 0) {
		lli total = 0;
		vector<lli>v(n + 1);
		v[0] = 0;
		for (lli i = 1; i <= n; i++) {
			cin >> v[i];
			total += v[i];
			v[i] += v[i - 1];//Acumulativo
		}

		vector<lli>op(n + 1 - k);
		for (lli i = k; i < v.size(); i++) {
			op[i - k] = v[i] - v[i - k];
		}

		lli gan1 = 0;
		//Primero calcular beneficio con pandilla -> pérdida respecto a máximo
		vector<lli> marcas(n + 1 - k);//Desde a, salta a a+k
		bool colocando = true;
		while (colocando) {
			colocando = false;
			lli pos = -1, maxim = 0;
			for (lli i = 0; i <= n - k; i++) {
				while (i <= n-k && marcas[i]) {
					i = marcas[i];
				}

				if (i > n - k) break;

				if (op[i] > maxim) {
					maxim = op[i];
					pos = i;
				}
			}
			//cout << pos << endl;

			//Marcar pos
			if (pos != -1) {
				colocando = true;
				gan1 += op[pos];
				//marcas[max(pos - k + 1, (lli)0)] = pos+k;//Marcar todo el rango de k
				for (lli i = max(pos - k + 1, (lli)0); i < min(pos+k-1, n+1-k); i++) {//REVISAR: potencial TLE
					marcas[i] = pos + k;
				}
			}
		}

		lli perd1 = total - gan1;

		lli gan2 = 0;
		//Calcular pérdida en óptimo
		lli perdidos = n % k;
		gan2 = pDin(op, n, k);
		
		lli perd2 = total - gan2;

		cout << perd1 - perd2 << '\n';

		cin >> n >> k;
	}
}
