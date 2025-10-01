// What will be the output of the following C++ code?

#include<iostream>
using namespace std;
int main ()
{
   int cin;
   cin >> cin;
   cout << "cin: " << cin;
   return 0;
}

// Answer: d
// Explanation: cin is a variable hence overrides the cin object. cin >> cin has no meaning so no error.


// #include<iostream>
// using namespace std;
// int main ()
// {
//    int cout;
//    cin >> cout;
//    cout <<  cout;
//    return 0;
// }

// output : nothing wil be printed 