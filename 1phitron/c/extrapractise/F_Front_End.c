#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int i = 0, j = n-1;
    for (int i = 0; i <=j ; i++)
    {
        if (i == j)
        {
            printf("%d ", array[i]);
        }
        else
        {
            printf("%d ", array[i]);
            printf("%d ", array[j]);
            array[i], array[j] = 0;
        }
        j--;
    }
    

    return 0;
}