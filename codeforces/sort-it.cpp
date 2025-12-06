#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;

    int totalMarks()
    {
        return math_marks + eng_marks;
    }
};

bool customSort(Student l, Student r)
{
    if (l.totalMarks() == r.totalMarks())
    {
        return l.id < r.id;
    }
    if (l.totalMarks() > r.totalMarks())
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    Student classSix[n];

    for (int i = 0; i < n; i++)
    {
        cin >> classSix[i].name >> classSix[i].cls >> classSix[i].sec >> classSix[i].id >> classSix[i].math_marks >> classSix[i].eng_marks;
    }

    sort(classSix, classSix + n, customSort);
    // Output sorted students
    for (int i = 0; i < n; i++)
    {
        cout << classSix[i].name << " "
             << classSix[i].cls << " "
             << classSix[i].sec << " "
             << classSix[i].id << " "
             << classSix[i].math_marks << " "
             << classSix[i].eng_marks << endl;
    }

    return 0;
}
