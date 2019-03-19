#include<iostream>
using namespace std;
class c1
{
private:
int n;
public:
int factorial(int);
};
int c1::factorial(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<fact;
return 0;
}
int main()
{
c1 p;
p.factorial(5);
return 0;
}
