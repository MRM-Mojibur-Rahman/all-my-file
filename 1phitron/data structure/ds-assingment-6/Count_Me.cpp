#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    cin.ignore();
    for (int t = 0; t < test_case; t++)
    {
        string s;
        getline(cin, s);
        stringstream words(s);
        string word;
        map<string, int> names;
        string n ;
        int val=0;
        while (words >> word)
        {
            names[word]++;
            if (names[word]>val)
            {
                val=names[word];
                n=word;
            }
            
        }
        cout<<n<<" "<<val<<endl;
        
    }
    return 0;
}