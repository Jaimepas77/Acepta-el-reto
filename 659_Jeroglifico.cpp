#include <iostream>

using namespace std;

int main() {
  long num;
  cin >> num;
  while(num != 0) {
    int a = num/1000000;
    num %= 1000000;
    int b = num/100000;
    num %= 100000;
    int c = num/10000;
    num %= 10000;
    int d = num/1000;
    num %= 1000;
    int e = num/100;
    num %= 100;
    int f = num/10;
    num %= 10;
    int g = num;
    
    while(a--) cout << 'H';
    while(b--) cout << 'R';
    while(c--) cout << 'D';
    while(d--) cout << 'F';
    while(e--) cout << 'C';
    while(f--) cout << 'G';
    while(g--) cout << 'T';
    cout << '\n';
    cin >> num;
  }
}