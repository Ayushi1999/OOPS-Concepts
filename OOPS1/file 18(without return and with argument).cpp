#include<iostream.h>
#include<conio.h>
void primenumber(int);
int main()
{
int n;
cout<<"enter n";
cin>>n;
primenumber(n);
getch();
}
void primenumber(int a)
{
int i;
for(i=2;i<=a-1;i++)
{
if(a%i==0)
{
break;
}
else if(i==a-1)
{
cout<<"prime";
}
}
}
