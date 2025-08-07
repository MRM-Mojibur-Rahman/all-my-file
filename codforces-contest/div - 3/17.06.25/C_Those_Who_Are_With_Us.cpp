#include <bits/stdc++.h>
using namespace std;
class Max_value
{

public:
    int rnum, cnum;
};
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {

        int r, c;
        cin >> r >> c;
        int mat[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> mat[i][j];
            }
        }
        int mx = INT_MIN;
        int num_of_mx = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (mat[i][j] > mx)
                {
                    mx = mat[i][j];
                }
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (mat[i][j] == mx)
                {
                    num_of_mx++;
                }
            }
        }
        if (num_of_mx==1)
        {
            cout<<mx-1<<endl;
            continue;
        }
        
        Max_value value_posi[num_of_mx];
        int max_value_index = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (mat[i][j] == mx)
                {
                    value_posi[max_value_index].rnum = i;
                    value_posi[max_value_index].cnum = j;
                    max_value_index++;
                }
            }
        }

        int same = 0;
        bool is_single=false;

        for (int i = 0; i < num_of_mx - 1; i++)
        {
            int samer = 0, samec = 0;
            int serch = 0;
            for (int j = 0; j < num_of_mx; j++)
            {
                if (value_posi[i].rnum == value_posi[j].rnum)
                {
                    samer++;
                }
                else if (value_posi[i].cnum == value_posi[j].cnum)
                {
                    samec++;
                }
            }
            if (samec > samer)
            {
                serch = value_posi[i].cnum;
            }
            else if (samec < samer)
            {
                serch = value_posi[i].rnum;
            }
            else if (samec==0&&samer==0)
            {
                is_single=true;
                break;
            }
            
        }
        if (is_single==true )
        {
            cout<<mx<<endl;
            continue;
        }
        

        cout << num_of_mx << " " << same;

        // if (same == num_of_mx)
        // {
        //     cout << mx - 1 << endl;
        // }
        // else
        // {
        //     cout << mx << "else"<< endl;
        // }
    }
    return 0;
}