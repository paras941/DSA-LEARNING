#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float b;
    cout << sizeof(++a + b)<<endl;
    cout << a;
    return 0;
}
// Answer: b
// Explanation: The a as a integer will be converted to float while calculating the size. The value of any variable doesn’t modify inside sizeof operator. Hence value of variable a will remain 5.
// Output:


#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float b;
    cout << (++a + b)<<endl;
    cout << a;
    return 0;
}

// output is 66;
