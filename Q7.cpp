//7. Create two class Time and Minute and add required getter and setter including constructors. 
//Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
//Example -
//int main()
//{
 //Time t1(2,30);
 //t1.display();
 //Minute m1;
 //m1.display();
 //m1=t1 // Fetch minute from time
 //t1.display();
 //m1.display();
 //return 0;
//}
#include<iostream>
#include<conio.h>
using namespace std;
class time
{
    public:
    int x;
    int y;
    time(int x,int y):x(x),y(y)
    {

    }
    time()
    {

    }
    void display()
    {
        cout<<"hour="<<x<<","<<"min="<<y<<endl;
    }
};
class minute
{
    public:
    int a;
    minute()
    {

    }
    minute(time t)
    {    
        int i;
        i=t.x*60;
        a=i+t.y;
    }
    void display()
    {       
        cout<<"minute is="<<a<<endl;
    }
};
int main()
{
    time t1(2,30);
    t1.display();
    minute m1;
    m1=t1;
    t1.display();
    m1.display();
    getch();
    return 0;

}