#include<stdio.h>
int count_before_one(int array[],int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]==1)
        {
            break;
        }
        else
        {
            count++;
        }
        
        
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int count = count_before_one(array,n);
    printf("%d",count);
    return 0;
}