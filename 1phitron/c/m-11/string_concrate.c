#include<stdio.h>
#include<string.h>
int main(){
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int lenth1=strlen(a);
    int lenth2=strlen(b);
    for (int i = 0; i <= lenth2; i++)
    {
        a[i+lenth1]=b[i];
    }
    printf("%s",a);
    
    return 0;
}