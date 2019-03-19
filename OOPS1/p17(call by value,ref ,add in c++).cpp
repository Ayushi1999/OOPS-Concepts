#include<iostream>
using namespace std;
class c1
{
private:
int n;
public:
void get_data()
{
cin>>n;
}
void copy(c1 x)
{
n=x.n;
cout<<n<<" ";
}
void copy(c1 *y)
{
n=y->n;
cout<<n<<" ";
}
void copy(c1 &z,int x)
{
n=z.n;
cout<<n<<" ";
}
};
int main()
{
c1 p,p1;
int x;
p.get_data();
p1.copy(p);
p1.copy(&p);
p1.copy(p,x);
return 0;
}
