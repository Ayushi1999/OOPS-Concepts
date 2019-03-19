#include<iostream.h>
#include<conio.h>
class c1
{
private:
        int i,k,y,sum;
public:
       void armstrong();
};
void c1::armstrong()
{
int sum=0;
for(i=1;i<=500;i++)
{
k=i;
while(i>0)
{
y=k%10;
sum=sum+y*y*y;
k=k/10;
}
}
if(sum==i)
{
cout<<i;
}
}
int main()
{
c1 p;
p.armstrong();
getch();
}
