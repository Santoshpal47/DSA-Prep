#include <iostream>
using namespace std;

class Queue
{

public:
    int *arr;
    int size;
    int qfront;
    int qrear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        qfront = 0;
        qrear = 0;
    }

    int push(int element)
    {
        if (qrear == size)
        {
            cout << "queue full hai bhai" << endl;
            return -1;
        }
        arr[qrear] = element;
        qrear++;
        return 0;
    }

    int pop()
    {
        if (qfront == qrear)
        {
            return -1;
        }
        else
        {

            arr[qfront] = -1;
            qfront++;

            if (qfront == qrear)
            {
                qfront = 0;
                qrear = 0;
            }
        }
        return 0;
    }

    bool empty()
    {
        if (qfront == qrear)
        {
            return true;
        }
        return false;
    }

    int front()
    {
        if (qfront == qrear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};

int main()
{

    Queue Queue(5);
    cout << Queue.empty() << endl;
    Queue.push(11);
    Queue.push(12);
    Queue.push(13);
    Queue.push(14);
    Queue.push(15);

    Queue.pop();

    while (!Queue.empty())
    {
        cout << Queue.front() << " ";
        Queue.pop();
    }

    return 0;
}