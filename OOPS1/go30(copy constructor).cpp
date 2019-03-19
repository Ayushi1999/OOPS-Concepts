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
       c1(c1 &p)
       {
       x=p.x;
       y=p.y;
       z=p.z;
       }
       void input()
       {
       cout<<"enter x&y";
       cin>>x>>y;
       }
       void sum()
       {
       z=x+y;
       cout<<"sum="<<z;
       }
};
int main()
{
c1 p;
c1 k(p);
p.input();
p.sum();
getch();
}

       
