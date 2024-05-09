#include<iostream>
using  namespace  std;


bool search(int arr[],int size,int num){

    if(size==0)
       return false;
    if (arr[0]==num)
    {
        return true;
    }
    else {
     search(arr+1,size-1,num);   
    }


}


int main(){

int arr[5]={1,3,4,0,5};


bool ans=search(arr,5,5);


if(ans==true){
    cout<<"yes";
}
else{
   cout<<"no";
}
return 0;
}

