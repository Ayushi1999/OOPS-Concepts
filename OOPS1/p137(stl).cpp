#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<int>v1;
vector<int>v2;
vector<int>::iterator it;
vector<int>::iterator itr;
int no,i;
for(i=0;i<4;i++)
{
cin>>no;
v1.push_back(no);
}
for(i=0;i<4;i++)
{
cin>>no;
v2.push_back(no);
}
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
copy(v2.begin(),v2.end(),v1.end());
reverse(v1.begin(),v1.end());
for(itr=v1.begin();itr!=v1.end();itr++)
{
cout<<*itr;
}
return 0;
}
