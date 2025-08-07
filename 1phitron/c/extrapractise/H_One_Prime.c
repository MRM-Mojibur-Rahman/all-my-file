#include<stdio.h>
#include<stdbool.h>
int main(){
    int num;
    scanf("%d",&num);
    int is_prime=true;
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            is_prime=false;
        
        }
        
    }
    if (is_prime==true)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    return 0;
}