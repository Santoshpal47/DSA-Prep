#include<iostream>
using namespace std;


void merge(int arr[],int s,int e){

    int mid=(e+s)/2;

  int len1=mid - s + 1;
  int len2 = (e-mid);

  // creating two new array 
  int *first=new int[len1];
  int *second=new int[len2];

   int k=s;
   // coping array values
  for(int i=0;i<len1;i++){

    first[i]=arr[k++];

  }

  k=mid+1;
  for(int i=0;i<len2;i++){

    second[i]=arr[k++];

  }

  // merge two sorted array
   int index1=0;
   int index2=0;
   k=s;
   while(index1<len1 && index2< len2){
     if(first[index1]<second[index2]){
        arr[k++]=first[index1++];
     }
     else{
        arr[k++]=second[index2++];
     }
   }

   while(index1<len1){
    arr[k++]=first[index1++];
   }
   while(index2<len2){
    arr[k++]=second[index2++];
   }

   delete[] first;
   delete[] second;

}


void mergesort(int arr[],int s,int e){

    if(s>=e){
       return;
    }

int mid=(e+s)/2;

mergesort(arr,s,mid);
mergesort(arr,mid+1,e);

merge(arr,s,e);

   

}

int main(){

int arr[]={1,6,2,5,3,4,9,7,8};
int length=sizeof(arr)/sizeof(arr[0]);
  
mergesort(arr,0,length-1);

for ( int i = 0 ; i < length; ++i ){
      cout<<arr[i]<<" ";
}
cout<<endl;

return 0;

}