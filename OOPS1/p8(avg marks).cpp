#include<iostream>
using namespace std;
class student
{
public:
int roll;
int m[20];
    void check()
    {
    int i;
     int sum=0;
       float avg;
    cin>>roll;
        for(i=0;i<5;i++)
        {
        cin>>m[i];
        }

    for(i=0;i<5;i++)
    {
     sum=sum+m[i];
    }
    avg=(float)(sum/500);
    cout<<avg<<endl;
    }
};
int main()
{
student s[20];
int i;
for(i=0;i<5;i++)
{
s[i].check();
}
return 0;
}

