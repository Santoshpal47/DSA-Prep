#include<iostream>
using namespace std;


bool sorted(int arr[],int size){

    // base case
    if(size==0 || size==1)
       return true ;
    if (arr[0]>arr[1])
    {
      return false; 
    }
    else {
      bool ans=sorted(arr+1,size-1);
        return ans;
    }  

}

int main(){

    int arr[6]={1,2,3,4,5,6};
    bool sort=sorted(arr ,6);

    if(sort==true){
        cout<<"Sorted array";
    }
    else
    {
        cout<<"Not sorted";
    }
    


}