#include<iostream>
using namespace std;

class A{
public:// function overloading
    int fun(int a,int b){
      return a+b;
    }
    void fun(string s,int a){
       cout<<s<<" "<<a<<endl;
    }

  // operator overloading
    int a ;
    int b;
  int operator+ (A &obj){
    int val=this->a;
    int vall=obj.a;
    return val+vall;
    
  }



};

int main() {

    A obj1,obj2;
   obj1.fun("santosh",80);
   cout<<obj1.fun(10,80)<<endl;
   obj1.a=10;
   obj2.a=5;

 
   cout<<obj1+obj2<<endl;


return 0;
}