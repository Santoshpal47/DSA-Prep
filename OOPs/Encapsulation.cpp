#include<iostream>
using namespace std;

class test{

  private:
    string name;
    int rollno;

  public:

  string getname(){
     return this->name;
  }

   void setname(string name){
      this->name=name;
  }


  int getrollno(){
     return this->rollno;
  }

   void setrollno(int roll){
      this->rollno=roll;
  }

};



int main(){

    test t1;
    t1.setname("Santosh Pal");
    t1.setrollno(1082);

   cout<<"Name :" <<t1.getname()<<endl<<"Roll no."<<t1.getrollno();
    

}