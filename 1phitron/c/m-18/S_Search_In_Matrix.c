#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    long long int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    int flag=0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]==x)
            {
               flag =1;
            }
        }
    }
    if (flag == 0)
    {
        printf("will take number");
    }
    else
    {
       printf("will not take number");
    }
    
    
    return 0;
}