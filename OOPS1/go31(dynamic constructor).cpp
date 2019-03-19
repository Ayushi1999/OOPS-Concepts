#include<iostream.h>
#include<conio.h>
class c1
{
private:
        int n;
public:
       c1()
       {
       n=0;
       }
       ~c1()
       {
       cout<<"dest";
       }
       void input()
       {
       cout<<"enter n";
       cin>>n;
       }
       void evenodd()
       {
       if(n%2==0)
       {
       cout<<"even";
       }
       else
       {
       cout<<"odd";
       }
       }
};
int main()
{
c1 *p;
p=new c1();
p->input();
p->evenodd();
delete(p);
getch();
}
