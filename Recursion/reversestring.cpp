#include<iostream>
using namespace std;

void check(string arr,int i){

  int n=arr.length();

  



}


void check(string& arr,int i,int j){

//base case
    if(i>j)
          return;
    swap(arr[i], arr[j]);
    i++;
    j--;
    //Recursive call
    check(arr,i,j);
   }


int main(){

string str="santosh";



check(str,0,str.length()-1);

cout<<str<<endl;

}