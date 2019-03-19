#include<iostream>
#include<set>
using namespace std;
int main()
{
set<int>s;
s.insert(10);
s.insert(12);
s.insert(11);
s.insert(13);
set<int>::iterator it,it1,it2;
cout<<"set elements after sort and removing\n";
for(it=s.begin();it!=s.end();it++)
{
cout<<*it;
cout<<"\n";
}
it1=s.find(10);
cout<<*it1;
it2=s.find(13);
s.erase(it1,it2);
for(it=s.begin();it!=s.end();it++)
{
cout<<*it;
cout<<"\n";
}
return 0;
}
