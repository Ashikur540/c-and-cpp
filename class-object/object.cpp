#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
    double gpa;
};

int main() {

    Student rakib, sakib;   
    
    cin >> rakib.name >> rakib.roll >> rakib.gpa;

    // flush the leftover newline before using getline
    cin.ignore();

    cin.getline(sakib.name, 100);
    cin >> sakib.roll >> sakib.gpa;

    cout << rakib.name << " " << rakib.roll << " " << rakib.gpa << endl;
    cout << sakib.name << " " << sakib.roll << " " << sakib.gpa << endl;

    return 0;
}
