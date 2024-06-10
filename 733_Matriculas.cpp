#include <iostream>
#include <unordered_map>

using namespace std;
using lli = long long int;

int main() {
	int c;
	cin >> c;
	while(c--) {
		lli a, b;
		string A, B;
		char aux;
		cin >> a >> A >> aux >> b >> B;
		
		unordered_map<char, int> num = { {'B', 0}, {'C', 1}, {'D', 2}, {'F', 3}, {'G', 4}, {'H', 5}, {'J', 6}, {'K', 7}, {'L', 8}, {'M', 9}, {'N', 10}, {'P', 11}, {'R', 12}, {'S', 13}, {'T', 14}, {'V', 15}, {'W', 16}, {'X', 17}, {'Y', 18}, {'Z', 19} };

		a += 10000 * (num[A[0]]*20*20 + num[A[1]]*20 + num[A[2]]);
		b += 10000 * (num[B[0]]*20*20 + num[B[1]]*20 + num[B[2]]);
		
		cout << abs(b-a)+1 << '\n';
	}
}