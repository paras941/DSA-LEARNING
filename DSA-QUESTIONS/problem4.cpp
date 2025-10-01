//   What is the value of p in the following C++ code snippet?
 
 #include <iostream>
    using namespace std;
    int main()
    {
        int p;
        bool a = true;
        bool b = false;
        int x = 10;
        int y = 5;
        p = ((x | y) + (a + b));
        cout << p;
        return 0;
    }

    // output is 16