#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int a = num%10;
    int b= num/10;
    if (a%b==0||b%a==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    
    return 0;
}