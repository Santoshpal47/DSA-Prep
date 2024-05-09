#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top; // index of array
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
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            // arr[top].pop();
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
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
            cout << "Stack is empty" << endl;
           
        }
    }

    bool isempty()
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

    Stack stack(4);
cout << stack.isempty() << endl;
    stack.push(89);
    stack.push(29);
    stack.push(39);
    stack.push(79);

    while (!stack.isempty())
    {
        cout << stack.peak() << " ";
        stack.pop();
    }

    cout << stack.peak() << endl;
    // stack.pop();
    // cout << stack.peak() << endl;

    return 0;
}