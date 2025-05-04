// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>
#include <algorithm>

using lli = long long int;

using namespace std;

int main()
{
	int td, ta, dd, da, no;
	while(cin >> td >> ta >> dd >> da >> no) {
		while(no--) {
			//cout << "oleada - " <<no << endl;
			vector<int>defensor;
			vector<int>atacante;
			int i = 0;//Dados leídos
			while(td && i++ < dd) {
				int tmp;
				cin >> tmp;
				defensor.push_back(tmp);
				//cout << "td[" << td << "] dd[" << dd << "]\n";
				td--;
			}
			i = 0;
			while(ta && i++ < da) {
				int tmp;
				cin >> tmp;
				atacante.push_back(tmp);
				ta--;
			}
			
			sort(defensor.begin(), defensor.end());
			sort(atacante.begin(), atacante.end());
			
			i = defensor.size()-1;
			int j = atacante.size()-1;
			while(i >= 0 && j >= 0) {
				if(atacante[j] > defensor[i])
					ta++;
				else
					td++;
				
				i--;
				j--;
				//cout << "batalla ---\n";
			}
			td += i+1;
			ta += j+1;
			//cout << "td[" << td << "] ta[" << ta << "]\n";
		}
		
		cout << td << ' ' << ta << '\n';
	}
}