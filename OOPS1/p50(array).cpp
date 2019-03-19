#include<iostream>
using namespace std;
class Array
{
int a[5];
public:
Array()
{
}
Array(int x)
{
int i;
for(i=0;i<5;i++)
{
a[i]=x+i;
}
}
void print()
{
int i;
for(i=0;i<5;i++)
{
cout<<a[i]<<" ";
}
}
};
int main()
{
Array a;
int c;
cin>>c;
a=c;
a.print();
return 0;
}
