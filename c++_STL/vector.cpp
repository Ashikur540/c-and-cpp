#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v;
    vector<int> v(5, 1); // 1 1 1 1 1
    // cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> v2(v); // copies v into v2 vector

    // how to copy elements from array to vector
    int arr[4] = {1, 2, 3, 4};
    vector<int> v3(arr, arr + 4);

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    // another way to declare and initialize
    vector<int> v4 = {5, 6, 7, 8};

    return 0;
}