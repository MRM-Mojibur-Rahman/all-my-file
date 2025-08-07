#include <stdio.h>
#include<math.h>
int main()
{
    int rc;
    scanf("%d", &rc);
    int a[rc][rc];
    int prim=0,secon=0;
    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
           if (i==j)
           {
             prim+=a[i][j];
           }
           
        }
    }
    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
           if (i+j==rc-1)
           {
             secon+=a[i][j];
           }
           
        }
    }
    int ans = prim - secon;
    int abs_ans = abs(ans);
    printf("%d",abs_ans);
    
    
    return 0;
}