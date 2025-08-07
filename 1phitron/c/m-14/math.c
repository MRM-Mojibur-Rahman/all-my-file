#include<stdio.h>
#include<math.h>
int main(){
    float a;
    scanf("%f",&a);
    int ce = ceil(a);
    int flo = floor(a);
    int ar = round(a);
    
    printf("%d\n",ce);
    printf("%d\n",ar);
    printf("%d\n",flo);

    int b , c;
    scanf("%d %d",&b,&c);
    int pw= pow(b,c);
    float sq= sqrt(b);
    int q = abs(-1);
    printf("%d\n",pw); 
    printf("%f\n",sq); 
    printf("%d\n",q); 

    
    return 0;
}