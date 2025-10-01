// What will be the output of the following C++ code?

#include <iostream>
    #include <string>
    #include <algorithm>
    using namespace std;
    int main() 
    {
        string s = "spaces in text";
        s.erase(remove(s.begin(), s.end(), ' ' ), s.end() ) ;
        cout << s << endl;
    }


    /*output :- spacesintext */