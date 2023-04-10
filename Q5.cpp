//5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add 
//functions to support Invent1 to float and Invent1 to Invent2 type.
//Example -
//int main()
//{
 //Invent1 x(4,5);
 //Invent2 y;
 //float z;
 //z = x; // Invent1 to float
 //y = x; // Invent1 to Invent2
 //return 0;
//}
#include<iostream>
#include<conio.h>
using namespace std;
class invent1
{
   public:
   float x;
   float y;
   invent1()
   {

   }
   invent1(float x,float y):x(x),y(y)
   {

   }
   void display()
    {
        cout<<"x= "<<x<<","<<y<<endl;
    }
    operator float()
    {
        return x;
    }
};
class invent2
   {
    public:
    int a;
    int b;
    invent2(invent1 i)
    {
        a=i.x;
        b=i.y;
    }
    invent2()
    {

    }
    void show()
    {
        cout<<"a= "<<a<<","<<"b= "<<b<<endl;
    }
   };
   int main()
   {
    invent1 x(4,5);
    invent2 y;
    float z;
    z=x;
    cout<<"z= "<<z<<endl;
    y=x;
    y.show();
    getch();
    return 0;
   }
