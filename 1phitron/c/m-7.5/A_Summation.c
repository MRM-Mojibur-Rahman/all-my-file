#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);  
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    if (sum < 0)
    {
        printf("%lld",-sum);
    }
    else{
    
    printf("%lld",sum);
    }
    
    
    
    return 0;
}