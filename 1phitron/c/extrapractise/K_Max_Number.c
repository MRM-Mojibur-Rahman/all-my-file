#include<stdio.h>
int max_num(int array[],int n,int i)
{
    if (i==n-1)
    {
        return array[i];
    }
    
    int max = max_num(array,n,i+1);
    if (max<array[i])
    {
        max =array[i];

    }
    return max;
    

}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int max = max_num(array,n,0);
    printf("%d",max);
    return 0;
}