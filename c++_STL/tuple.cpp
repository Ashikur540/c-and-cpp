#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // unlike pair it can take multiple values
    tuple<string, int, string> student = make_tuple("Ashikur Rahman", 10, "B"); // or {"Ashikur Rahman", 10, "B"}

    // print
    cout << get<0>(student) << " " << get<1>(student) << " " << get<2>(student) << endl;
    // another way
    auto [name, roll, section] = student;

    cout << name << " " << roll << " " << section;

    cout << "\n---- Dynamic Input: -----" << endl;
    // Take dynamic input
    int n;
    cin >> n;
    vector<tuple<string, int, string>> employees(n);

    for (int i = 0; i < n; i++)
    {
        cin >> get<0>(employees[i]) >> get<1>(employees[i]) >> get<2>(employees[i]);
    }
    // print

    for (int i = 0; i < n; i++)
    {
        cout << get<0>(employees[i]) << "-"
             << get<1>(employees[i]) << "-"
             << get<2>(employees[i]) << endl;
    }

    return 0;
}