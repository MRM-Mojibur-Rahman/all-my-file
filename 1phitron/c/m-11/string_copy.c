#include<stdio.h>
#include<string.h>
int main(){
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    // int lenth = strlen(a);----  by useing for loop
    // for (int i = 0; i <= lenth; i++)
    // {
    //     b[i]=a[i];
    // }
    //  printf("%s %s",a,b);
    
    // useing shortcut
    strcpy(b,a);
    printf("%s %s",a,b);


    return 0;
}