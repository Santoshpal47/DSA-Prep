#include<iostream>
using namespace std;


int partition(int arr[],int s, int e){

    int pivot=arr[s];

    int count=0;
    for(int i=s+1;i<=e;i++){
      if(arr[i]<=pivot){
        count++;
      }
    }

    int pivotindex=s+count;
    swap(arr[pivotindex],arr[s]);

    int i=s,j=e;
     
    while (i<pivotindex && j>pivotindex)
    {
        while (arr[i]<pivot)
        {
           i++;
        }

         while (arr[j]>pivot)
        {
           j--;
        }

        if(i<pivotindex && j>pivotindex){
         swap(arr[i++],arr[j--]);
        }
        
    }
    
 
return pivotindex;


}

void sort(int arr[],int s,int e){

    if(s>=e){
         return;
    }

    int  p =partition(arr,s,e);
   
   // left side sort
    sort(arr,s,p-1);

    // right side sort
    sort(arr,p+1,e);

}

int main() {

    int arr[]={1,9,2,8,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

 return 0;

}