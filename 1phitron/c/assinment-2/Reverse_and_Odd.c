#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int array[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = t-1; i >= 0; i--)
    {
        if (i%2!=0)
        {
            printf("%d ",array[i]);
        }
        
    }
    
    
    return 0;
}