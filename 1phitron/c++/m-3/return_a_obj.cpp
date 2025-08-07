#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char section;
    int roll;
    Student(char section, int roll)
    {
        this->section = section;
        this->roll = roll;
    }
};
Student fun()
{
    Student mojibur('b', 2403091);
    return mojibur;
}
int main()
{
    Student mrm = fun();
    cout<<mrm.section<<" "<<mrm.roll;
    

    return 0;
}