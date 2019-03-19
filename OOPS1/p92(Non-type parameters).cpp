#include <iostream>
using namespace std;

template < class T, int N >
 T fun (T arr[], int size)
{
    if (size > N)
      cout << "Not possible";
    T max = arr[0];
   for (int i = 1; i < size; i++)
      if (max < arr[i])
          max = arr[i];
   return max;
}

int main ()
{
    int arr[] = {12, 3, 14};
    cout << fun(arr,3);
}
