#include <bits/stdc++.h>
using namespace std;

void print(queue<int> q)
{
    queue<int> q1 = q;
    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << "\n";
}

int main()
{
    queue<int> q;
    for (int i = 0; i < 5; i++)
    {
        q.push(i + 1);
    }
    cout << "Size of queue is " << q.size() << "\n";
    cout << "The elements of queue are ";
    print(q);

    cout << "First element of the queue " << q.front() << "\n";
    cout << "Last element of the queue " << q.back() << "\n";
    if (!q.empty())
        cout << "Queue is not empty" << "\n";
    q.pop();
    q.pop();
    print(q);
    q.push(10);
    cout << "Size of queue is " << q.size() << "\n";
    cout << "The elements of queue are ";
    print(q);
    return 0;
}