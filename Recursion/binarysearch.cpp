#include<iostream>
using namespace std;


void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
      cout<<arr[i]<<"  ";
    }
    cout<<endl;
}


bool binarysearch(int arr[],int start,int end,int key){

    print(arr,start,end);

if(start>end){
    return false;
}

int mid=(end-start)/2 + start;
cout<<"mid value is "<<arr[mid]<<endl;

if(arr[mid]==key){
     return true;
}

   if(arr[mid]<key){
         return binarysearch(arr,mid+1,end,key);
   }
   else{
     return binarysearch(arr,start,mid-1,key);
   }
   

}

int main(){

int arr[6]={1, 2, 3, 5, 8, 9};  
int key=5;
int start=0;
int end=5;

bool ans=binarysearch(arr,start,end,key);

if(ans){
  cout<<"present";
}
else{
    cout<< "not present ";  //this is not working properly.
}

return 0;

}