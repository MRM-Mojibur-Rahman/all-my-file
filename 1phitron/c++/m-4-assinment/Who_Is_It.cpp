#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;
};
int main()
{
    int test_case;
    cin >> test_case;
    for (int m = 0; m < test_case; m++)
    {
        Student m1, m2, m3;
        cin >> m1.id >> m1.name >> m1.section >> m1.total_marks;
        cin >> m2.id >> m2.name >> m2.section >> m2.total_marks;
        cin >> m3.id >> m3.name >> m3.section >> m3.total_marks;
        if (m1.total_marks > m2.total_marks && m1.total_marks > m3.total_marks)
        {
            cout << m1.id << " " << m1.name << " " << m1.section << " " << m1.total_marks << endl;
        }
        else if (m2.total_marks > m1.total_marks && m2.total_marks > m3.total_marks)
        {
            cout << m2.id << " " << m2.name << " " << m2.section << " " << m2.total_marks << endl;
        }
        else if (m3.total_marks > m2.total_marks && m3.total_marks > m1.total_marks)
        {
            cout << m3.id << " " << m3.name << " " << m3.section << " " << m3.total_marks << endl;
        }
        if (m1.total_marks == m2.total_marks && m1.total_marks > m3.total_marks)
        {

            if (m1.id > m2.id && m1.id > m3.id)
            {
                cout << m2.id << " " << m2.name << " " << m2.section << " " << m2.total_marks << endl;
            }
            else
            {
                cout << m1.id << " " << m1.name << " " << m1.section << " " << m1.total_marks << endl;
            }
        }
        else if (m2.total_marks > m1.total_marks && m2.total_marks == m3.total_marks)
        {
            if (m2.id < m3.id)
            {
                cout << m2.id << " " << m2.name << " " << m2.section << " " << m2.total_marks << endl;
            }
            else
            {
                cout << m3.id << " " << m3.name << " " << m3.section << " " << m3.total_marks << endl;
            }
        }
        else if (m3.total_marks > m2.total_marks && m3.total_marks == m1.total_marks)
        {
            if (m3.id > m1.id)
            {
                cout << m1.id << " " << m1.name << " " << m1.section << " " << m1.total_marks << endl;
            }
            else
            {
                cout << m3.id << " " << m3.name << " " << m3.section << " " << m3.total_marks << endl;
            }
        }
        else if (m1.total_marks == m2.total_marks && m3.total_marks == m1.total_marks)
        {
            if (m1.id < m2.id && m1.id < m3.id)
            {
                cout << m1.id << " " << m1.name << " " << m1.section << " " << m1.total_marks << endl;
            }
            else if (m2.id < m1.id && m2.id < m3.id)
            {
                cout << m2.id << " " << m2.name << " " << m2.section << " " << m2.total_marks << endl;
            }
        }
    }
    return 0;
}
