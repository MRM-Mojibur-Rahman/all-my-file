#include<bits/stdc++.h>
using namespace std;
class Student {

    public:
    char dept[100];
    char section;
    int roll;
    Student(char d[],int sec,int ro)
    {
        strcpy(dept,d);
        section = sec;
        roll=ro;
    }


};
int main(){
    char d[100]="cse";
    char sec= 'b';
    int roll= 2403091;
    // char d[10];
    // char sec;
    // int roll;
    // cin>>d>>sec>>roll;
    Student mojibur(d,'N',2403091);
    
    // char temp1[100]="CSE";
    // strcpy(mojibur.dept,temp1);
    // mojibur.roll=2403091;
    // mojibur.section='B';
    // cin>>mojibur.dept>>mojibur.section>>mojibur.roll;
    cout<<mojibur.dept<<" "<<mojibur.section<<" "<<mojibur.roll<<endl;


    return 0;
}