#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int in, val;
    scanf("%d %d", &in, &val);
    for (int i = n; i >= 0; i--)
    {
        if (in == i)
        {
            array[i]=val;
            break;
        }
        else
        {
            array[i] = array[i - 1];
        }
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",array[i]);
    }
    

    return 0;
}