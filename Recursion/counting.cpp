#include<iostream>
using namespace std;



int revcount(int n){

    if (n==0)
    {
        return 0;
    }
    
    cout<<n<<endl;

    revcount(n-1);
}

int main(){
    
    int a;
    cout<<"Enter the Integer:";
    cin>>a;

    revcount(a);

    
    
    return 0;
}