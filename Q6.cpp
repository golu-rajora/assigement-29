//6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e int ) 
//to Time class.
//Example-
//int main()
//{
 //int duration;
 //cout<<”Enter time duration in minutes”;
 //cin>>duration;
 //Time t1 = duration;
 //t1.display();
 //return 0;
//}
#include<iostream>
#include<conio.h>
using namespace std;
class time 
{
    int x;
    public:
    time(int y)
    {
        x=y*60;
    }
    void display()
    {
        cout<<"time duration in second is="<<x<<endl;
    }
};
int main()
{
    int duration;
     cout<<"enter time duration in minutes:-";
      cin>>duration;
     time t1 = duration;
     t1.display();
     getch();
     return 0;
}
