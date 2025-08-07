#include<stdio.h>
int fun(int n)
{
    int x=1;
  if(n==1) return x;
  for (int i = 1; i < n; i++)
  {
    x=x+fun(i)*fun(n-i);
  }
  return x;
    
}
int main(){
    printf("%d",fun(5));
    return 0;
}