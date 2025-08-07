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
    int val;
    scanf("%d", &val);
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            
            if (array[i] + array[j] == val)
            {
                printf("YES\n");
                flag = 1;
                // printf("%d %d",array[i] ,array[j]);
            }
        }
    }
    if (flag == 0)
    {
        printf("NO");
    }

    return 0;
}