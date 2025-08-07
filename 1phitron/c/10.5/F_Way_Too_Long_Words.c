#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        char str[101];
        scanf("%s",&str);
        if (strlen(str)<=10)
        {
            printf("%s\n",str);
        }
        else if (strlen(str)>10)
        {
            int len = strlen(str)-2;
            printf("%c%d%c\n",str[0],len,str[strlen(str)-1]);
        }
        
    }
    
    return 0;
}