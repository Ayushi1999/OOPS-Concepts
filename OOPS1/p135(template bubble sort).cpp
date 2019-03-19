#include<iostream>
using namespace std;
template<class T>
class bubble
{
public:
int size1;
T arr[100];
void get();
void sort1();
void display();
};
template<class T>
void bubble<T>::get()
{
    cin>>size1;
    int i;
    for(i=0;i<size1;i++)
    {
        cin>>arr[i];
    }
}
template<class T>
void bubble<T>::sort1()
{
    int i,j;
    T temp;
    for(i=0;i<size1-1;i++)
    {
        for(j=0;j<size1-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                 temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
template<class T>
void bubble<T>::display()
{
    int i;
    for(i=0;i<size1;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
bubble<int>b;
b.get();
b.sort1();
b.display();
bubble<char>b1;
b1.get();
b1.sort1();
b1.display();
return 0;
}
