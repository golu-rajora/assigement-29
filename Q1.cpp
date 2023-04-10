//1.Write a C++ program to convert Primitive type to Complex type.
 //Example -
 //int main()
//{
 //Complex c1;
 //Int x=5;
 //c1=x;
 //return 0;
//}
#include<conio.h>
#include<iostream>
using namespace std;
class complex 
{
   int x;
   public:
   complex (int x):x(x)
   {

   }
   complex()
   {

   }
   void display()
   {
    cout<<"complex number is="<<x<<endl;
   }
};
int main()
{
    complex c1;
    int x=5;
    c1=x;
    c1.display();
    getch();
    return 0;
}
