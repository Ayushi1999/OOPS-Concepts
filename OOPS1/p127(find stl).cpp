#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main()
{
int val=5,no;
vector<int>v;
vector <int> :: iterator it,result;
for(int it=0;it<5;it++)
{
    cin>>no;
    v.push_back(no);
}
result=find(v.begin(),v.end(),val);
if(result!=v.end())
{
cout<<"element found";
}
else
{
cout<<"not";
}
return 0;
}
