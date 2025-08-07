#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count =0;
    for (int i = 1; i <=n; i+=2)
    {
        count++;
    }
    
    int star= 1,space= 4+count;
    for (int i = 1; i <=(5+count); i++) // for line 
    {
        for (int j = 1; j <=space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <=star; j++)
        {
            printf("*");
        }
        space--;
        star+=2;
        printf("\n");
    }
    
    for (int i = 1; i <= 5; i++)
    {
        printf("     ");
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}