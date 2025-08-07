#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int del;
    scanf("%d",&del);
    int array2[n-1];
    for (int i = 0; i < n; i++)
    {
        if (i < del)
        {
            array2[i]=array[i];
        }
        else if (i>=del)
        {
            array2[i]=array[i+1];
        }
        
        
        
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",array2[i]);
    }
    
    
    return 0;
}