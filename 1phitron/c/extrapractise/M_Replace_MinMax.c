#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int min=INT_MAX,max=INT_MIN;
    int min_in,max_in;
    for (int i = 0; i < n; i++)
    {
        if (min>array[i])
        {
            min=array[i];
            min_in=i;
        }
        if (max<array[i])
        {
            max=array[i];
            max_in=i;
        }
        
    }
    int temp = array[min_in];
    array[min_in]=array[max_in];
    array[max_in]=temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    
    
    return 0;
}