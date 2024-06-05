#include<bits/stdc++.h>


using namespace std;
int main()
{
   vector<int> v{1,23,4,6};
 
//    for(int i=1;i<=5;i++){
//     v.push_back(i);
//    }
   cout<<endl;
   
//    int ans=v.begin();
   sort(v.begin(),v.end());
      for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";
   }

   cout<<endl;
   cout<<v.front()<<endl<<"  vkv";
   cout<<endl;
   cout<<v.capacity()<<endl;
   
   cout<<v.max_size()<<endl;
   v.resize(4);
    for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";
   }
   cout<<endl;
   v.reserve(2);
   for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";
   }

 return 0;
}