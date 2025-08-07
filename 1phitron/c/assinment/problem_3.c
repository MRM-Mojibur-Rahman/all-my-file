#include<stdio.h>
int main (){
    long long int taka;
    scanf("%lld",&taka);
    if (taka >= 1500)
    {
        printf("I will buy Punjabi\n");
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
    }
    else if (taka>1000 && taka < 1500)
    {
        printf("I will buy Punjabi\n");
    }
    else
    {
        printf("Bad luck!");
    }
    
    
    
    return 0;
}