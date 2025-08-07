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
    a--;
    b--;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (x[i][j] == '.')
            {
                int pos1 = abs(a - i);
                int pos2 = abs(b - j);

                if ((pos1==1&&pos2==0)||(pos2==1&&pos1==0)||(pos1==1&&pos2==01))
                {
                    cout << "no";
                    return 0;
                }
            }
        }
    }
    cout<<"yes";

    return 0;
}