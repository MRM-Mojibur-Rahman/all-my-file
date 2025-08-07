#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num1, num2;
    while (cin>>num1>>num2)
    {
        if (num1<= 0|| num2<=0)
        {
            break;
        }
        
        int sum = 0;
        int start = min(num1, num2), end = max(num1, num2);

        for (int i = start; i <= end; i++)
        {
            cout << i << " ";
            sum += i;
            
            
        }
        cout << "sum =" << sum<<endl;
    }

    return 0;
}