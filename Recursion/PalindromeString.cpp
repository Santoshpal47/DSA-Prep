#include<iostream>
using namespace std;

bool check(string str,int i,int j){


//base case
   if(i>j){
      return true;
   }
   
   //recurvise  case
   if(str[i]!=str[j]){
    return false;
   }
   else {
    return (check(str,(i+1),(j-1)));
   }


}



int main() {

string s="abc";

bool ans=check(s,0,s.length()-1);


if(ans==true){
  cout<<"Yes! it is palindrome";
}
else{
    cout<< "No!";
}

return 0;

}