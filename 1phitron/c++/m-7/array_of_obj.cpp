#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int num;
    cin >> num;
    Student students[num];
    for (int i = 0; i < num; i++)
    {
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].roll >> students[i].marks;
    }
    for (int i = 0; i < num; i++)
    {
        cout << students[i].name << endl
             << students[i].roll << " " << students[i].marks << endl;
    }

    return 0;
}