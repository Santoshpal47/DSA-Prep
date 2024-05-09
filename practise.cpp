#include <iostream>
using namespace std;

class Stack
{

public:
    int size;
    int top;
    int *arr;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int value)
    {

        if (size - top > 1)
        {
            top++;
            arr[top] = value;
        }
        else
        {
            cout << "stack overflow hogya bhai" << endl;
            ;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow hogya bhai" << endl;
        }
    }
    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s(5);

    s.push(34);
    s.push(36);
    s.push(38);
    s.push(12);

    while (!s.isEmpty())
    {
        cout << s.peak() << " ";
        s.pop();
    }
     cout <<endl;
    s.pop();

    return 0;
}