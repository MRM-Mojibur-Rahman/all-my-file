#include <bits/stdc++.h>
using namespace std;
void zero_sort(int a[], int n)
{
    int place = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            for (int j = i; j < place; j++)
            {
                a[j] = a[j + 1];
                a[j + 1] = 0;
            }
            place--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    zero_sort(a, n);

    return 0;
}