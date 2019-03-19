#include<iostream>
using namespace std;
class mat
{
int a[20][20],b[20][20],c[20][20];
public:
friend istream &operator>>(istream &in,mat &ob)
    {
    int i,j;
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
        {
        in>>ob.a[i][j];
        }
        }
    return in;
    }
/*friend istream &operator>>(istream &in,mat &ob)
    {
    int i,j;
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
        {
        in>>ob.b[i][j];
        }
        }
    return in;
    }*/
    mat operator * (mat &ob)
    {
        int i,j,k;
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
            c[i][j]+=ob.a[i][k]*ob.b[k][j];
            }
        }
        }
        return ou;
    }
    friend ostream &operator<<(ostream &ou,mat &ob)
    {
        int i,j;
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
        {
            ou<<setfill('0')<<setw(3)<<ob.a[i][j];
        }
        }
        return ou;
    }
};
int main()
{
mat ob,ob1,ob2;
cin>>ob;
cin>>ob1;
//ob2=ob+ob1;
cout<<ob2;
}
