#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int cls;
    int roll;
    double gpa;

    Student (int cls, int roll, double gpa){
        this->cls=cls;
        this->roll=roll;
        this->gpa=gpa;
    }
};

int main() {

    Student rakib(8,2,4.00);   // static object
    
   Student* sakib= new Student(10, 5, 4.56); // dynamic object which stores in heap and returns a pointer address

   

    cout << rakib.cls << " " << rakib.roll << " " << rakib.gpa << endl;
    // short form of (*p)= p->
 cout << (*sakib).cls << " " << sakib->roll << " " << sakib->gpa << endl;
    return 0;
}
