#include<iostream.h>
#include<conio.h>
class c1
{
private:
        int x,y,z;
public:
       c1()
       {
       x=1;
       y=1;
       z=1;
       }
       c1(int a,int b)
       {
       x=a;
       y=b;
       }
       void input()
       {
       cout<<"enter x&y";
       cin>>x>>y;
       }
       void sum()
       {
       z=x+y;
       cout<<z;
       }
};
int main()
{
c1 p;
c1 k(1,2);
p.input();
p.sum();
getch();
}
