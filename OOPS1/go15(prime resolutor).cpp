#include<iostream.h>
#include<conio.h>
class c1
{
private:
        int n,i;
public:
       void input();
       void prime();
};
void c1::input()
{
     cout<<"enter n";
     cin>>n;
}
void c1::prime()
{
     for(i=2;i<=n-1;i++)
     {
     if(n%i==0)
     {
     break;
     }
     else
     {
     cout<<"prime";
     }
     }
}
int main()
{
c1 p;
p.input();
p.prime();
getch();
}
