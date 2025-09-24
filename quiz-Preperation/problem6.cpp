// what is the output of this 

#include <iostream>
using namespace std;

int main()
{
    register int i = 1;
    int *ptr = &i;
    cout << *ptr;
    return 0;
}

// output = Complication error 


