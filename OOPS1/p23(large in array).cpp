#include<iostream>
using namespace std;
class c1
{
private:
char item[20];
int price;
static int max;
public:
//int large;
void get_data()
{
cin>>item>>price;
}
void large()
{
   // int max,i;
   if(price>max)
    max=price;
    //max=p[0].price;
   /* for(i=0;i<5;i++)
    {
         if(p[i].price>max)
            max=p[i].price;
    }
  cout<<max;*/
}
display()
{

    cout<<max;
}
};
int c1::max;
int main()
{
c1 p[20],m;
int i;
for(i=0;i<5;i++)
{
p[i].get_data();
}
//m.large(p);
for(i=0;i<5;i++)
{
p[i].large();

//cout<<m.large;
}
p[0].display();
return 0;
}

