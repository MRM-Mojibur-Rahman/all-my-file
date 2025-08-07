#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    char sec;
    int roll;
    Student(int cls, char sec, int roll)
    {
        this->cls = cls;
        this->sec = sec;
        this->roll = roll;
    }
};
Student* dynamic()
{
    Student * mamun = new Student(16,'b',3033);
    return mamun;
}
int main()
{
    Student mojibur(13, 'b', 3091);
    cout<<mojibur.cls<<" "<<mojibur.sec<<" "<<mojibur.roll<<endl;
    Student * obj = dynamic();
    cout<<obj->cls<<" "<<obj->sec<<" "<<obj->roll<<endl;
    return 0;
}