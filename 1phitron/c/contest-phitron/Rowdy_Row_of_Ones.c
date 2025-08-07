#include <stdio.h>
#include<limits.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int frea[r] ;
    for (int i = 0; i <r; i++)
    {
        frea[i]=0;
    }
        
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]==1)
            {
                frea[i]++;
            }
            
        }
    }
    int ans,max=INT_MIN;
    for (int i = 0; i < r; i++)
    {
        if (frea[i]>max)
        {
            max=frea[i];
            ans=i;
        }
        
    }
    printf("%d",ans);
    
    return 0;
}