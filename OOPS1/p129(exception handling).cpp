#include <iostream>
    #include <exception>
    using namespace std;
    void myunexpected ()
    {
        cout << "unexpected handler called\n";
        throw;
    }
    void myfunction () throw (int,bad_exception)
    {
        throw 'x';
    }
    int main (void)
    {
        set_unexpected (myunexpected);
        try
        {
            myfunction();
        }
        catch (int)
        {
            cout << "caught int\n";
        }
        catch (bad_exception be)
        {
            cout << "caught bad_exception\n";
        }
        catch (...)
        {
            cout << "caught other exception \n";
        }
        return 0;
    }
