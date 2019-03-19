#include<iostream>
using namespace std;
class Rect
{
int l,b;
public:
void input()
{
cin>>l>>b;
}
void show()
{
cout<<l*b;
}
};
int main()
{
Rect r;
//r.input();
//r.show();
Rect *p;
p=&r;
p->input();
p->show();
return 0;
}
