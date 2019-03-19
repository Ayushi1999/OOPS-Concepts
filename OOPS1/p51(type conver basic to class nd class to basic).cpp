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
operator int()
{
int i,s=0;
for(i=0;i<5;i++)
{
s=s+a[i];
}
return s;
}
};
int main()
{
Array a;
int c;
cin>>c;
a=c;
int sum=a;
cout<<sum;
return 0;
}
i
