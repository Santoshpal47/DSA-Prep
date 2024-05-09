#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
  // destructor
  ~Node()
  {

    int var = this->data;
    if (this->next != NULL)
    {
      delete next;
      this->next = NULL;
    }
    cout << "memory is free for node with data : " << var << endl;
  }
};

void Insert(Node *&tail, int element, int value)
{

  if (tail == NULL)
  {

    Node *newnode = new Node(value);
    tail = newnode;
    newnode->next = newnode;
  }
  else
  {

    Node *current = tail;

    while (current->data != element)
    {
      current = current->next;
    }

    Node *temp = new Node(value);

    temp->next = current->next;
    current->next = temp;
  }
}

void print(Node *tail)
{

  Node *temp = tail;

  do
  {
    cout << tail->data << " ";
    tail = tail->next;
  } while (tail != temp);
  cout << endl;
}

int main()
{

  // Node* node1=new Node(10);
  // Node* tail=node1;

  Node *tail = NULL;

  Insert(tail, 10, 11);
  print(tail);

  Insert(tail, 11, 12);
  print(tail);

  Insert(tail, 11, 13);
  print(tail);

  cout<<"tail : "<<tail->data<<endl;

  return 0;
}
