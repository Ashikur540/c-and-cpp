#include <bits/stdc++.h>

using namespace std;

class Student
{

public:
    int roll;
    string name;
    int marks;
    // Student(int roll, string name, int marks)
    // {
    //     this->roll = roll;
    //     this->name = name;
    //     this->marks;
    // }
};

int main()
{
    int n;
    cin >> n;
    Student classSix[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        /* get line er age kono input and new line thakle setar jnno always cin ignore kora lage cz oi input er por je new line oita jate escape hoi
         and input eo new line dite hoi get line er jnno
         */
        getline(cin, classSix[i].name);
        cin >> classSix[i].roll >> classSix[i].marks;
    }

    sort(classSix, classSix + n, classSix->marks);

    for (int i = 0; i < n; i++)
    {
        cout << classSix[i].name << " " << classSix[i].roll << " " << classSix[i].marks << endl;
    }
}