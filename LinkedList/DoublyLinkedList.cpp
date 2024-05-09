#include<iostream>
using namespace std;


class Node{
public:
    
    Node* prev;
    int data;
    Node* next;
// constructor
  Node(int data){
   
   this->data=data;
   this->next=NULL;
   this->prev=NULL;

 }

 ~Node(){
    int var=this->data;
    if(this->next!=NULL){

      delete next;
      next=NULL;
    }
    cout<<"Memory is free for "<<var<<endl;

 }

};

void InsertAtHead(Node* &head,int value){
 
 Node* temp=new Node(value);

 head->prev=temp;
 temp->next=head;
 head=temp;

 return;  
}

void InsertAtTail(Node* &tail,int value){

  Node* temp=new Node(value);

  tail->next=temp;
  temp->prev=tail;
  tail=temp;

    return;
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
   temp->next->prev=NodeToInsert;
   temp->next = NodeToInsert;
   NodeToInsert->prev=temp;
}

void deleltenode(Node* &head,Node* &tail,int position){

// to delete first node
   if(position==1){
    Node* temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;
   }
   else{

    
    Node* curr=head;
    Node* pre=NULL;

    int cnt=1;
    while(cnt<position){
      pre=curr;
      curr=curr->next;
      cnt++;
    }
// to delete last node
   if(curr->next==NULL){
          tail=pre;
      
      }  

// to dlete middle
    curr->prev=NULL;
    pre->next=curr->next;
    curr->next=NULL;
    delete curr;

   }



}

void print(Node* &head){

    Node* temp=head;

   while (temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }
   cout<<endl;

}

int main(){

    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    // cout<<node1->prev<<endl;

    Node* head=node1;
    Node* tail=node1;

    // InsertAtHead(head,9);
    // InsertAtHead(head,8);

    // print(head);

    //  cout<<"head : "<<head->data<<endl;
    // cout<<"tail : "<<tail->data<<endl;

    // InsertAtTail(tail,11);
    // InsertAtTail(tail,12);
    
    // print(head);

    // cout<<"head : "<<head->data<<endl;
    // cout<<"tail : "<<tail->data<<endl;

    cout << "Node Before insert in middle" << endl;
   InsertAtTail(tail, 11);
   InsertAtTail(tail, 13);
   InsertAtTail(tail, 14);
   InsertAtTail(tail, 15);
   print(head);
   cout << "head :" << head->data << endl;
   cout << "tail :" << tail->data << endl;

   int pos=3;
   cout << "Node After insert in "<<pos<<" position "<< endl;
   InsertInBetween(head, tail, pos, 12);
   print(head);

   cout << "head :" << head->data << endl;
   cout << "tail :" << tail->data << endl;

   deleltenode(head,tail,4);
    print(head);
   cout << "head :" << head->data << endl;
   cout << "tail :" << tail->data << endl;

return 0;

}