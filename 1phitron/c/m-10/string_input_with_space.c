#include<stdio.h>
int main(){
    char name[50];
    // scanf("%s",&name);----printed mojibur
   // gets(name);------------Mojbur Rahman Mortuza 
   fgets(name,22,stdin);
    //fgets(name,22,stdin);------ Mojbur Rahman Mortuza + enter

    printf("%s \n",name);
    return 0;
}