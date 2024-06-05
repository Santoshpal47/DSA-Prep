#include <iostream>
using namespace std;

class Node
{
public:
   int data;
   Node *next;

   //constructor
   Node(int data)
   {
      this->data = data;   
      this->next = NULL;
   }
    
    //destructor
   ~Node(){

     int var=this->data;
     if(this->next!=NULL){
        delete next;
        this->next=NULL;
     }
     cout<<"memory is free for node with data : "<<var<<endl;


    }

};

void InsertAtHead(Node *&head, int value)
{
   Node *temp = new Node(value);
   temp->next = head;
   head = temp;
}
void InsertAtTail(Node *&tail, int value)
{
   Node *temp = new Node(value);
   tail->next = temp;
   tail = temp;
} 

void InsertInBetween(Node *&head, Node *&tail, int position, int value)
{
   // insert in start
   if (position == 1)
   {
      InsertAtHead(head, value);
      return;
   }
  
   Node *temp = head;
   int count = 1;

   while (count < position - 1)
   {
      temp = temp->next;
      count++;
   }

    // insert in last
   if (temp->next == NULL)
   {
      InsertAtTail(tail, value);
      return;
   }

   Node *NodeToInsert = new Node(value);

   NodeToInsert->next = temp->next;
   temp->next = NodeToInsert;
}

void deletenode(Node* &head,Node* &tail,int position){
   
   if(position==1){
     
     Node* temp=head;

    head=head->next;
      
      temp->next=NULL;
    
     delete temp; 
   
   }
   else{

      Node* current = head;
      Node* previous=NULL;
       int cnt=1;
      while(cnt<position){
        previous=current;
        current=current->next;
        cnt++;
      }

    // managing tail
    if (current->next==NULL)
         {
            tail = previous;
         }

      previous->next=current->next;
   
      
      current->next=NULL;
      delete current;

   }
}

void print(Node *&head)
{
   Node *temp = head;

   while (temp != NULL)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;
}

int main()
{
   Node *node1 = new Node(10);

   Node *head = node1;
   Node *tail = node1;

   // InsertAtHead(head, 12);
   // InsertAtHead(head, 13);
   // print(head);
   cout << "Node Before insert in middle" << endl;
   InsertAtTail(tail, 11);
   InsertAtTail(tail, 13);
   InsertAtTail(tail, 14);
   InsertAtTail(tail, 15);
   print(head);

   int pos=6;
   cout << "Node After insert in "<<pos<<" position "<< endl;
   InsertInBetween(head, tail, pos, 12);
   print(head);

   cout << "head :" << head->data << endl;
   cout << "tail :" << tail->data << endl;

    deletenode(head,tail,6);
    print(head);

    
   cout << "head :" << head->data << endl;
   cout << "tail :" << tail->data << endl;


   return 0;
}
