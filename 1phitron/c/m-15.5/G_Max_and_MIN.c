#include<stdio.h>
#include<limits.h>
void maxmin(int array[],int n){

    int max=INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max =array[i];
        }
        if (min > array[i])
        {
            min = array[i];
        }
        
        
    }
    printf("%d %d",min , max);
    
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    maxmin(array,n);
    return 0;
}