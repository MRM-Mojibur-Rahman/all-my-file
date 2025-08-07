#include<stdio.h>
int main(){
    int test;
    scanf("%d",&test);
    for (int i = 1; i <=test ; i++)
    {
        char s[10001];
        scanf("%s",&s);
        int cap=0,small=0,digi=0;
        for (int i = 0; s[i]!='\0' ; i++)
        {
            if (s[i]>='A'&&s[i]<='Z')
            {
                cap++;
            }
            else if (s[i]>='a'&&s[i]<='z')
            {
                small++;
            }
            else if (s[i]>='0'&&s[i]<='9')
            {
                digi++;
            }
            
        }
        printf("%d %d %d",cap ,small,digi);
        

        printf("\n");
    }
    
    return 0;
}