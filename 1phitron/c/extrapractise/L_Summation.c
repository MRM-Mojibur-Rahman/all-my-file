#include<stdio.h>
long long int sum_array(int array[],int n,int i)
{
    if (i==n-1)
    {
        return array[i];
    }
    long long int sum = sum_array(array,n,i+1);
    return sum+array[i];
    
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    long long int sum =sum_array(array,n,0);
    printf("%lld",sum);
    
    return 0;
}