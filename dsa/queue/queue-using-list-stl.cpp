#include <bits/stdc++.h>
using namespace std;

// A custom class to implement a Queue using list
class myQueue
{
private:
    list<int> data_list;

public:
    void enqueue(int value)
    {
        data_list.push_back(value);
        cout << "Enqueued: " << value << endl;
    }

    // Function to dequeue an element (remove from the front)
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        int front_element = data_list.front();
        data_list.pop_front();
        cout << "Dequeued: " << front_element << endl;
    }

    // Function to get the front element
    int front()
    {
        if (isEmpty())
        {
            // Handle the error condition as appropriate for your application
            // Here, we'll return a sentinel value and print an error message
            cout << "Queue is empty. No front element." << endl;
            return -1;
        }
        return data_list.front();
    }

    // Function to check if the queue is empty
    bool isEmpty()
    {
        return data_list.empty();
    }

    // Function to get the size of the queue
    size_t size()
    {
        return data_list.size();
    }

    // Function to display the elements in the queue
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue: empty" << endl;
            return;
        }
        cout << "Queue: ";
        for (int element : data_list)
        {
            cout << element << " ";
        }
        cout << endl;
    }
};

int main()
{
    myQueue myQueue;

    // Enqueue elements
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    myQueue.display();

    // Access front element
    cout << "Front element: " << myQueue.front() << endl;

    // Dequeue elements
    myQueue.dequeue();
    myQueue.display();

    myQueue.dequeue();
    myQueue.display();

    // Check if empty
    cout << "Is queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") << endl;

    myQueue.dequeue();
    myQueue.display();

    cout << "Is queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
