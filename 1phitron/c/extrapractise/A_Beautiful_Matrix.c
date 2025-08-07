#include <stdio.h>
int main()
{
    int a[5][5];
    int r, c;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                r = i, c = j;
            }
        }
    }
    int count = 0;
    if (r > 2)
    {
        count = r-2;
    }
    
    else 
    {
        
        count = 2-r;
       
        
    }
    if (c > 2)
    {
        count+=c-2;
    }
    else
    {
        count+=2-c;
    }

    printf("%d", count);

    return 0;
}