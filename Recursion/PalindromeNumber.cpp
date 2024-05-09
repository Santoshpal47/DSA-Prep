#include<iostream>


using namespace std;
void reverse(int n){

    int reminder;

    if(n<10){
      cout<<n;
    }
    else{
   
     reminder=n%10;
  
    int result=n/10;

   cout<<reminder;

    reverse(result);

    }

   
 

}


int main(){

  int x;
  cin>>x;

  reverse(x);





  return 0;

}