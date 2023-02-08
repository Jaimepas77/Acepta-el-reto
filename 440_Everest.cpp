// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    while (casos != 0)
    {
        //vector <int> v (casos);
        long long int tmp, min, max, tamAct, grupos = 1, minTmp;
        cin >> minTmp;
        max = 1;
        min = casos;
        tamAct = 1;
        for (int i = 1; i < casos; i++)
        {
            cin >> tmp;
            if (tmp < minTmp)
            {
                minTmp = tmp;
                if (tamAct > max)
                    max = tamAct;
                if (tamAct < min)
                    min = tamAct;
                tamAct = 1;
                grupos++;
            }
            else
            {
                tamAct++;
            }
        }
        if (tamAct > max)
            max = tamAct;
        else if (tamAct < min)
            min = tamAct;

        cout << grupos << " " << min << " " << max << endl;

        cin >> casos;
    }
}