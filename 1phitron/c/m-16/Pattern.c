#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    int flag;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
                flag = 0;
            }
            else
            {
                printf("-");
                flag = 1;
            }
        }
        star += 2;
        space--;
        printf("\n");
    }
    star=(n-1)*2-1;
    for (int i = 1; i <= (n - 1); i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        if (flag == 0)
        {
            for (int j = 1; j <= star; j++)
            {
                printf("-");
            }
            flag=1;
        }
        else if (flag==1)
        {
            for (int j = 1; j <= star; j++)
            {
                printf("#");
            }
            flag=0;
        }
        star-=2;

        printf("\n");
    }

    return 0;
}