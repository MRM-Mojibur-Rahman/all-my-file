#include<stdio.h>
void p(int n){
    for (int i = 1; i <= n; i++)
    {
        if (i<n)
        {
            
            printf("%d ",i);
        }
        else if (i=n)
        {
             printf("%d",i);
        }
        
        
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    p(n);
    return 0;
}