#include<iostream>
using namespace std;
class complex
{
private:
int a,b;
public:
void get_data()
{
cin>>a>>b;
}
void check(complex s1,complex s2)
{
complex r;
//r.a=(s1.a*s2.a)+(s1.a*s2.b);
//r.b=(s1.b*s2.a)+(s1.b*s2.b);
r.a=(s1.a*s2.a)-(s1.b*s2.b);
r.b=(s1.b*s2.a)+(s1.a*s2.b);
cout<<r.a<<"+"<<r.b<<"i";
}
};
int main()
{
complex s1,s2,s3;
s1.get_data();
s2.get_data();
s3.check(s1,s2);
return 0;
}
