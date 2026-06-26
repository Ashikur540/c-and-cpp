#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pair<string, int> student = make_pair("Alice", 25);
    // or
    pair<string, int> student2 = {"Mic", 26};
    // print/ extract way
    cout << student.first << " " << student.second << endl;
    auto [name, age] = student2; // structured binding (C++17 feature)
    cout << name << " " << age << endl;

    cout << "Size of pair: " << sizeof(student) << endl;
    cout << "---- after modification: ----" << endl;
    // modification
    student.first = "Bob";
    student.second = 30;
    cout << student.first << " " << student.second << endl;
    // another way to modify
    student2 = make_pair("John", 28);
    cout << student2.first << " " << student2.second << endl;

    cout << "---- Dynamic Input: -----" << endl;
    // Take dynamic input
    int n;
    cin >> n;
    pair<string, int> marks[n]; // [{bangla, 20}, {english,30}]

    for (int i = 0; i < n; i++)
    {
        cin >> marks[i].first >> marks[i].second;
    }
    // print

    for (int i = 0; i < n; i++)
    {
        cout << marks[i].first << "-" << marks[i].second << endl;
    }
    return 0;
}