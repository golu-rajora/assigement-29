//10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to 
//Dollar and Dollar to Rupee conversion.
//Example-
//int main()
//{
 //Rupee r = 23;
//Dollar d = r; // Rupee to Dollar conversion
//d.display();
//r.display();
//r = d; // Dollar to Rupee Conversion
//d.display();
//r.display();
 //return 0;
//}
#include<iostream>
#include<conio.h>
using namespace std;
class rupee
{
    public:
    int r;
    rupee()
    {

    }
    rupee(int x)
    {
        r=x;
    }
   
   void display()
    {
        cout<<"rupee is="<<r<<endl;
    }
};
class dollar
{ 
    public:
    int d;
    dollar ()
    {

    }
    dollar(rupee r1)
    {
        d=r1.r;
    }
    operator rupee()
    {
        
        return d;
    }
    void display()
    {
        cout<<"dollar is="<<d<<endl;
    }

};
int main()
{
    rupee r=23;
    dollar d=r;
    d.display();
    r.display();
    r=d;
    d.display();
    r.display();
    getch();
    return 0;
}
