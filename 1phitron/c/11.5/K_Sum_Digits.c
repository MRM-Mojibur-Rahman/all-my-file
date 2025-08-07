#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[1000001];
    scanf("%s",&s);
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        int val=s[i]-48;
        sum+=val;
    }
    printf("%lld",sum);
    

    return 0;
}