#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        int n, posi;
        cin >> n >> posi;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        int val = v[posi - 1];
        int difa = v[posi - 1] ;
        sort(v.begin(), v.end());
        int r = 0, l = n - 1;
        int newposi;
        while (r <= l)
        {

            int mild = (r + l) / 2;
            if (val == v[mild])
            {
                newposi = mild;
                break;
            }
            else if (v[mild] > val)
            {
                l = mild - 1;
            }
            else
            {
                r = mild + 1;
            }
        }
        int fla = 0;
        for (int i = newposi; i < n-1; i++)
        {
            int d = v[i+1]-v[i];
          
            if (d==0)
            {
                continue;
            }
             
            if (difa<d)
            {
                 fla=1;
                break;
               

                
            }
            
            
            
            
        }
        (fla==0)?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
    return 0;
}