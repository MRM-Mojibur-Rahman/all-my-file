// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test_case;
//     cin >> test_case;
//     for (int t = 0; t < test_case; t++)
//     {
//         stack<char> one;
//         stack<char> zero;
//         string s;
//         cin >> s;
//         for (char x : s)
//         {
//             if (x=='0')
//             {
//                zero.push('0');
//             }
//             else
//             {
//                 one.push('1');
//             }
//         }
//         while (!zero.empty())
//         {
//             if(one.empty()==false) one.pop();
//             else
//             {
//                 break;
//             }
//             zero.pop();
//         }
//         if (one.empty()==true&&zero.empty()==true)
//         {
//            cout<<"YES"<<endl;
//         }
//         else
//         {
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }

// trying another way

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {

        string s;
        cin >> s;
        stack<char> st;
        
        for (int i = 0; i < s.size(); i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
                
            }
             else if (st.top() == s[i])
            {
                st.push(s[i]);
            }
            else
            {

                st.pop();
            }
        }

        (st.empty()) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}