#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
int no;
set <int> v;
set <int> :: iterator it,it1;

for(int it=0;it<5;it++)
{
    cin>>no;
    v.insert(no);
}
cout<<count(v.begin(),v.end(),3);
//cout<<*it1;
return 0;
}
