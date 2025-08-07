#include<stdio.h>
int main(){
    int pass;
    for (int i = 0; i < 1; i--)
    {
      scanf("%d",&pass);
      if (pass == 1999)
      {
        printf("Correct\n");
        break;
      }
      else
      {
        printf("Wrong\n");
      }
      
      
    }
    
    return 0;
}