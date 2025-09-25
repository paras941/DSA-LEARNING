    // #include <iostream>
    // using namespace std;
    // int main()
    // {
    //     int n = 5;
    //     void *p = &n;
    //     int *pi = static_cast<int*>(p);
    //     cout << *pi << endl;
    //     return 0;
    // }

    // output = 5



#include <iostream>
using namespace std; 
int main()
{
    try
    {
        try
        {
            throw 20;
        }
        catch (int n)
        {
            cout << "Inner Catch\n";
            throw;
        }
    }
    catch (int x)
    {
        cout << "Outer Catch\n";
    }
}

// b)

// Inner Catch
// Outer Catch