#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
bool predicate(int value)
{
return (value>13);
}
int main()
{
int no;
vector<int>v;
vector<int>::iterator it,result;
//int no;
for(int it=0;it<5;it++)
{
cin>>no;
v.push_back(no);
}
result=find_if(v.begin(),v.end(),predicate);
if(result!=v.end())
{
cout<<"Element found";
}
else
{
cout<<"not";
}
return 0;
}
