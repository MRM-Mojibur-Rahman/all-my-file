#include <stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int array[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[j]);
        }
        int b[n];
        for (int j = 0; j < n; j++)
        {
            b[j]=array[j];
        }
        for (int j = 0; j < n-1; j++)
        {
            for (int l = j+1; l < n; l++)
            {
                if (b[j]>b[l])
                {
                    int temp=b[j];
                    b[j]=b[l];
                    b[l]=temp;
                }
                

            }
            
        }
        int c[n];
        for (int j = 0; j < n; j++)
        {
            c[j]=abs(array[j]-b[j]);
        }
        
        for (int j = 0; j < n; j++)
        {
            printf("%d ",c[j]);
        }
        printf("\n");
        
    }

    return 0;
}