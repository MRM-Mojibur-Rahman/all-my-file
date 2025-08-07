#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    char x[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> x[i][j];
        }
    }
    int a, b;
    cin >> a >> b;
    int pr = 200, pc = 200;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (x[i][j] == '.')
            {

                pr = i;
                pc = j;
            }
        }
    }
    if (pr != 200 && pc != 200)
    {
        int posi1 = abs(max(pr, a) - min(pr, a));
        int posi2 = abs(max(pc, b) - min(pc, b));
        if (posi1 == 1 || posi2 == 1)
        {
            cout << "no";
        }
        else
        {
            cout << "yes";
        }
    }
    else
    {
        cout << "yes";
        return 0;
    }

    // cout << pr << " " << pc;

    return 0;
}