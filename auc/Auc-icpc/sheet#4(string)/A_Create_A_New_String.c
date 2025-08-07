#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    char t[1001];
    scanf("%s",&s);
    scanf("%s",&t);
    int lens=strlen(s),lent=strlen(t);
    printf("%d %d\n",lens,lent);
    // printf("%s %s",s,t); method 1 
    char new_string[2001];
    new_string[0]='\0';
    strcat(new_string,s);
    strcat(new_string," ");
    strcat(new_string,t);
    printf("%s",new_string);
    




    return 0;
}