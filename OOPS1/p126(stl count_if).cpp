#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
bool predicate(int n)
{
return (n>3);
}
int main()
{
int no;
vector<int> v;
vector <int> :: iterator it,it1;
for(int it=1;it<=5;it++)
{
    cin>>no;
    v.push_back(no);
}
int count1;
count1=count_if(v.begin(),v.end(),predicate);
cout<<"there are"<<count1<<"elements greater than 3";
return 0;
}
