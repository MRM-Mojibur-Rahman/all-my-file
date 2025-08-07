#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int fre[100001] = {0};
    for (int i = 0; i < n; i++)
    {
        fre[array[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n",fre[i]);
    }
    

    return 0;
}