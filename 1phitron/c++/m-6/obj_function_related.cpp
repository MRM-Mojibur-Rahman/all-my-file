#include <bits/stdc++.h>
using namespace std;
class Student
{

public:
    string name;
    int roll, english, math;
    Student(string name, int roll, int english, int math)
    {
        this->name = name;
        this->roll = roll;
        this->english = english;
        this->math = math;
    }
    void total_marks()
    {

        cout << "Total marks of = " << name << " is " << math + english;
    }
};
int main()
{
    Student mojibur("Mojibur Rahamn",2403091,80,95);
    mojibur.total_marks();

    return 0;
}