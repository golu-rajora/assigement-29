//4.Create Product class and convert Product type to Item type using casting operator
//int main()
//{
// Item i1;
 //Product p1;
 //p1.setData(3,4);
 //i1=p1;
 //return 0;
//}
#include<iostream>
#include<conio.h>
using namespace std;
 class item 
{
    public:
     int x,y;
    item()
    {

    }
    void display()
    {
        cout<<"item in x= "<<x<<","<<"y= "<<y<<endl;
    }
};
class product
 {
    public:
    int a,b;
    setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    product()
    {

    }
    void show()
    {
        cout<<"product in a= "<<a<<","<<"b= "<<b<<endl;
    }
    operator item()
    {
        item temp;
        temp.x=a;
        temp.y=b;
        return temp;
    }
   
 };
 int main()
 {
    item i1;
    product p1;
    p1.setdata(3,4);
    p1.show();
     i1=p1;
    i1.display();
    getch();
    return 0;
 }