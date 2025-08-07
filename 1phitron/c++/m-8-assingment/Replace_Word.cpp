#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        string main, rep;
        cin.ignore();
        cin >> main >> rep;
        int mainlen = main.size();
        int replen = rep.size();
        string ans = {""};
        int flag = 0;
        for (int i = 0; i < mainlen ; i++)
        {
            
            for (int j = 0; j < replen; j++)
            {
                
                if (main[i + j] == rep[j])
                {
                    flag = 1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if (flag == 1)
            {
                ans += '#';
                
                i += replen-1;
                flag=0;
                
            }
            else
            {
                
                ans += main[i];
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}