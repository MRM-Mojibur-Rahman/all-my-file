#include <bits/stdc++.h>
using namespace std;
int main()
{
    string words;
    cin >> words;
    int total[5] = {0};
    for (char c : words)
    {
        if (c == 'E' || c == 'e')
        {
            total[0]++;
        }
        else if (c == 'Y' || c == 'y')
        {
            total[2]++;
        }
        else if (c == 'G' || c == 'g')
        {
            total[1]++;
        }
        else if (c == 'P' || c == 'p')
        {
            total[3]++;
        }
        else if (c == 'T' || c == 't')
        {
            total[4]++;
        }
    }
    cout<< *min_element(total,total+5);

    

    return 0;
}