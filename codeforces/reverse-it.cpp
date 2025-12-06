#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    string sec;
    int id;
};

int main()
{
    int n;
    cin >> n;
    // cin.ignore(); // clear newline after n

    Student classSix[n];

    for (int i = 0; i < n; i++)
    {

        cin >> classSix[i].name >> classSix[i].cls >> classSix[i].sec >> classSix[i].id;
    }

    int i = 0, j = n - 1;
    while (i < j)
    {
        string temp = classSix[i].sec;
        classSix[i].sec = classSix[j].sec;
        classSix[j].sec = temp;

        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << classSix[i].name << " "
             << classSix[i].cls << " "
             << classSix[i].sec << " "
             << classSix[i].id << endl;
    }

    return 0;
}
