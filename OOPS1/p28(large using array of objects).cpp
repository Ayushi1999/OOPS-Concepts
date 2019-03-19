#include<iostream>
using namespace std;
class c1
{
private:
int item;
int price;
public:
void get_data()
{
cin>>item>>price;
}
void large(c1 p[])
{
int max=p[0].price,i;
    for(i=0;i<5;i++)
    {
        if(max<p[i].price)
        {
        max=p[i].price;
        }
    }
    cout<<max;
}
};
int main()
{
c1 p[20],m;
int i;
for(i=0;i<5;i++)
{
p[i].get_data();
}
m.large(p);
return 0;
}
