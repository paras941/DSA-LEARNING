// What will be the output of the following C++ code snippet?

    #include <iostream>
    using namespace std;
    int operate (int a, int b)
    {
        return (a * b);
    }
    float operate (float a, float b)
    {
        return (a / b);
    }
    int main()
    {
        int x = 5, y = 2;
        float n = 5.0, m = 2.0;
        cout << operate(x, y) <<"\t";
        cout << operate (n, m);
        return 0;
    }

    // The "\t" makes the gaps between them 
    // output : 10   2.5 