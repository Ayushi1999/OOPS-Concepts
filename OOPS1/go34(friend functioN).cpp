#include<iostream.h>
#include<conio.h>
class c1
{
private:
        int x,y,z;
public:
       void input()
       {
       cout<<"enter x&y";
       cin>>x>>y;
       }
friend void sum(c1 p);
};
void sum(c1 p)
{
p.z=p.x+p.y;
cout<<"sum="<<p.z;
}
int main()
{
c1 k;
k.input();
sum(k);
getch();
}

