#include<stdio.h>
int main(){
    int t,x,y;
    scanf("%d",&t);
    int array[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d %d",&x,&y);
    for (int i = t-1; i >=0 ; i--)
    {
        if (i==x)
        {
            printf("%d",array[i]=y);
        }
        else
        {
            printf("%d",array[i]);
        }
        
        
    }
    


    
    return 0;
}