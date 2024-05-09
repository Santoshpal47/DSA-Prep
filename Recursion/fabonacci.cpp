#include<iostream>
using namespace std;

int fab(int n){

   int p=0,q=1;
    int temp;
    temp=p+q;
    p=q;
    q=temp;
    return temp;

}

int main(){

int a;
cout<<"Enter the nth digit:";
cin>>a;

fab(a);


  




}