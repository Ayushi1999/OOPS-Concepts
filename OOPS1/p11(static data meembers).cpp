#include<iostream>
using namespace std;
class test
{
int no;
static int count;
public:
void getval(int);
void defcount();
};
void test::getval(int x)
{
no=x;
cout<<"no="<<no;
count++;
}
int test::count;
void test::defcount()
{
cout<<count;
}
int main()
{
test t1,t2,t3;
t1.defcount();
t2.defcount();
t3.defcount();
t1.getval(100);
t2.getval(200);
t3.getval(300);
t1.defcount();
t2.defcount();
return 0;
}
