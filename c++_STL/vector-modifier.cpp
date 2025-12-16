#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v;
    vector<int> v = {5, 6, 7, 8};
    vector<int> v2;
    vector<int> v3 = {1, 2, 3, 4, 100};
    v2 = v;
    v2.push_back(9);
    v2.pop_back();                                   // removes from last
    v2.insert(v2.begin() + 3, 100);                  // insert in between
    v2.insert(v2.begin() + 0, v3.begin(), v3.end()); // insert multiple values
    v2.erase(v2.begin() + 5);                        // 1 2 3 4 5 6❌ 7 100 8

    replace(v2.begin(), v2.end(), 100, 99); // replaces 100 by 99 within full vector

    auto it = find(v2.begin(), v2.end(), 99);
    it == v2.end() ? cout << "Not found" : cout << "found";
    cout << endl;

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    // print though iterator
    for (auto it = v3.begin(); it < v3.end(); it++)
    {
        cout << *it << " "; // it is a pointer to dereference to print value
    }
    cout << endl;

    return 0;
}