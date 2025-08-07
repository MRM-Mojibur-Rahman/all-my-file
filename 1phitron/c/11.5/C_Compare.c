#include<stdio.h>
#include<string.h>
int main(){
    char x[21],y[21];
    scanf("%s %s",&x,&y);
    for (int i = 0; i <21; i++)
    {
        
        if (x[i]>y[i])
        {
            printf("%s",y);
            break;
        }
        else if (x[i]<y[i])
        {
            printf("%s",x);
            break;
        }
        else if (x[i]=='\0')
        {
            printf("%s",x);
            break;
        }
        else if (y[i]=='\0')
        {
            printf("%s",y);
            break;
        }
        else if (x[i]=='\0'&& y[i]=='\0')
        {
            printf("%s",y);
            break;
        }
        if (x[i]==y[i])
        {
            continue;
        }
        
    }
    
    // int val = strcmp(x,y);
    // if (val >0)
    // {
    //     printf("%s",y);
    // }
    // else if (val<0)
    // {
    //     printf("%s",x);
    // }
    // else
    // {
    //     printf("%s",x);
    // }
    

    return 0;
}