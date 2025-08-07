#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int run=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);  
    }
    int x;
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        if (x == array[i])
        {
            printf("%d",i);
            break;
        }
        else
        {
            run = run+1;
        }
        
        
    }
    if (run == n)
    {
        printf("-1");
    }
    
    
    return 0;
}