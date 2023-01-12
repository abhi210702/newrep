#include<iostream>
using namespace std;

class one
{

     public:

     void virtual show()=0;

};

class two:public one

{

     public:

     void show()

     {

          cout<<"\nTwo";

     }

};

class three:public two

{

     public:

  virtual void show()

     {

          cout<<"\nThree";

     }

};

int main()

{

   three tobj;

   tobj.show();

   return 0;

}