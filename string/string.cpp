#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Hello world";

    cout << str.size() << endl;
    cout << str.capacity() << endl;
    // str.clear(); // clears string
    // str.empty() // returns if empty or not
    str.resize(20, 'x');
    cout << str << endl;
    //   first last element
    cout << "last char: " << str.front() << " " << "Last char: " << str.back() << endl;

    // modification
    string s1 = "hello";
    s1 += "world";
    s1.push_back('X'); // pushes character only- pop_back() removess
    // s1.back() = 'Y';
    cout << s1 << endl;
    //  js er splice er moto
    s1.erase(3, 2); // from 3th index and delete count 2
    cout << s1;

    return 0;
}