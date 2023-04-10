//8. Create a Rupee class and convert it into int. And Display it.
//Example-int main()
//{
 //Rupee r = 10;
 //int x = r;
//cout<<x;
 //return 0;
//}
#include<iostream>
#include<conio.h>
using namespace std;
class rupee
{
    int x;
    public:
    rupee(int a)
    {
        x=a;
    }
    rupee()
    {

    }
    operator int()
    {
        return x;
    }
};
int main()
{
    rupee r=10;
    int x=r;
    cout<<"x= "<<x<<endl;
    getch();
    return 0;
}