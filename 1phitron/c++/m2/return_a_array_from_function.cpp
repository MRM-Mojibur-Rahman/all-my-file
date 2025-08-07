#include<bits\stdc++.h>
using namespace std;
int * arrayin()
{
    int * arr = new int [5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    return arr;
}
using namespace std;
int main ()
{
    int* arr= arrayin();
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    
}