//9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.
//Example-
//int main()
//{
 //int x = 50;
//Dollar d;
//d = x;
//d.display();
 //return 0;
//}
#include<iostream>
#include<conio.h>
using namespace std;
class dollar
{
    int x;
    public:
    dollar(int a)
    {
        x=a;
    }
    dollar()
    {

    }
    void display()
    {
        cout<<"dollar is="<<x<<endl;
    }
};
int main()
{
    dollar d;
    int x=50;
    d=x;
    d.display();
    getch();
    return 0;
}