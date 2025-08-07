#include<stdio.h>
#include<limits.h>
int main(){
    int test_case;
    scanf("%d",&test_case);
    for (int k = 1; k <= test_case; k++)
    {
        int n;
        scanf("%d",&n);
        int array[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&array[i]);
        }
        long long int the_smallest=INT_MAX;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
               if (the_smallest>(array[i]+array[j]+j-i))
               {
                the_smallest=array[i]+array[j]+j-i;
               }
               
            }
            
        }
        
        printf("%lld\n",the_smallest);
    }
    
    return 0;
}