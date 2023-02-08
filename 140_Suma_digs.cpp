#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n >= 0) {
        string sol = "";
        int acum = 0;
        while(n >= 10) {
            acum += n%10;
            sol = (char)(n%10 + '0') + sol;
            sol = " + " + sol;
            n /= 10;
        }
        acum += n%10;
        sol = (char(n + '0')) + sol;
        sol += " = ";

        cout << sol << acum << '\n';

        cin >> n;
    }
}