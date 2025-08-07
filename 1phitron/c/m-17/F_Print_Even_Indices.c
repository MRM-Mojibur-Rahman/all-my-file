#include<stdio.h>
void pri_rev(int a[],int n ,int i){
    if (i >= n)
    {
        return;
    }
    
    pri_rev(a , n , i+2);
    printf("%d ",a[i]);
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    pri_rev(array,n,0);
    return 0;
}