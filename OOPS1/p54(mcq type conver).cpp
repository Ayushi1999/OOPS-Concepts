#include <iostream>
    using namespace std;
    class sample1
    {
        float i, j;
    };
    class sample2
    {
        int x, y;
        public:
        sample2 (int a, int b)
        {
             x = a;
             y = b;
        }
        int result()
        {
             return x + y;}

    };
    int main ()
    {
        sample1 d;
        sample2 * padd;
        padd = (sample2*) &d;
        cout <<result();
        return 0;
        }
