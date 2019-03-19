#include<iostream>
#include<vector>
using namespace std;
int main()
{
//int i;
vector <int> v1;
vector <int> :: iterator it;
for(int i=1;i<=5;i++)
{
v1.push_back(i);
}
for(it=v1.end()-1;it>=v1.begin();it--)
{
cout<<*it<<" ";
//cout<<v1.erase(v1.begin()+2);
}
cout<<endl;
cout<<v1.size()<<endl;
cout<<v1.empty()<<endl;
return 0;
}
