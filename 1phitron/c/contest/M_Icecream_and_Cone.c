#include<stdio.h>
int main(){
    int scope , con;
    scanf("%d %d",&scope ,&con);
    if (scope>con)
    {
        printf("%d\n",con);
    }
    else if (scope==con)
    {
        printf("%d\n",scope);
    }
    else
    {
       printf("%d",scope);
    }
    
    return 0;
}