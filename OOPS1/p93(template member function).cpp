#include<iostream>
using namespace std;
template<class T>
class Matrix
{
    T a[20][20];
int i,j,n;
public:
void readMatrix();
void sum(Matrix<T>ob,Matrix<T>ob1);
void diff(Matrix<T>ob,Matrix<T>ob1);
void mul(Matrix<T>ob,Matrix<T>ob1);
void printMatrix();
};
template<class T>
void Matrix<T>::readMatrix()
{
int i,j;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
    cin>>a[i][j];
    }
}
}
template<class T>
void Matrix<T>::printMatrix()
{
int i,j;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
    cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
}
template<class T>
void Matrix<T>::sum(Matrix<T> ob,Matrix<T> ob1)
{
    int i,j;
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
         a[i][j]=ob.a[i][j]+ob1.a[i][j];
     }
    }
}
template<class T>
void Matrix<T>::diff(Matrix<T> ob,Matrix<T> ob1)
{
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     {
         a[i][j]=ob.a[i][j]-ob1.a[i][j];
     }
    }
}
template<class T>
void Matrix<T>::mul(Matrix<T> ob,Matrix<T> ob1)
{
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n;i++)
    {

     for(j=0;j<n;j++)
     {
         a[i][j]=0;
         for(k=j;k<n;k++)
         {
         a[i][j]+=ob.a[i][k]*ob1.a[k][j];
         }
     }
    }
}
int main()
{
Matrix<int>ob;
Matrix<int>ob1;
Matrix<int>ob2;
ob.readMatrix();
ob1.readMatrix();
ob2.sum(ob,ob1);
ob2.printMatrix();
ob2.diff(ob,ob1);
ob2.printMatrix();
ob2.mul(ob,ob1);
ob2.printMatrix();
return 0;
}
