#include<iostream>
#include<iomanip>
using namespace std;
template <class T>
void sort(T arr[],int n)
{
int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            T temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<fixed<<setprecision(3)<<arr[i]<<endl;
       // cout<<arr[i]<<endl;
    }
}
int main()
{
string arr[20];
//float arr[20];
int i,n;
cin>>n;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
sort(arr,n);
return 0;
}
