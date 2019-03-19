#include<iostream>
using namespace std;
#include<vector>
int main()
{
vector<int>v;
vector<int>::iterator i;
int s,no,max=0;
cin>>s;
//switch(choice)
//{
//case 1:
for(int i=1;i<=s;i++)
{
cin>>no;
v.push_back(no);
}
for(i=v.begin();i!=v.end();i++)
{
   // cout<<*i;
    if(max<*i)
        max=*i;
}
int min=10000;
for(i=v.begin();i!=v.end();i++)
{
    if(min>*i)
        min=*i;
}
/*
for(i=v.begin();i!=v.end();i++)
{
cout<<*i;
}*/
cout<<max<<endl;
cout<<min;
//break;
//}
return 0;
}
