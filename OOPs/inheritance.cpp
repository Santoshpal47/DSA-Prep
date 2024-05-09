#include<iostream>
using namespace std;

// multiple inheritance

class Parent {

public:
  int money=100;


};

class child1{
public:
 void fun1(){
    cout<<"I am first child"<<endl;
 }

};

class child2{

    public:
 void fun2(){
    cout<<"I am second child"<<endl;
 }
};

class child3: public Parent,public child1 , public child2{

    public:
 void fun3(){
    cout<<"I am youngest child"<<endl;
 }
};


int main(){

child3 obj;
obj.fun1();
obj.fun2();
obj.fun3();
cout<<obj.money<<endl;
return 0;

}