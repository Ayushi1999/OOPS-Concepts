#include<iostream>
using namespace std;
class prime
{
int n;
public:
void input();
void check();
};
void prime::input()
{
cin>>n;
}
void prime::check()
{
int i,j;
for(i=2;i<=n;i++)
{
for(j=2;j<=i;j++)
{
if(j==i)
cout<<j<<" ";
else if(i%j==0)
break;
}
}
}
int main()
{
prime p;
//p.n=0;
p.input();
p.check();
return 0;
}
