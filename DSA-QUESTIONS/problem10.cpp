#include <iostream>
#include <string>
using namespace std;
int main ()
{
  std::string str ("Sanfoundry.");
  str.back() = '!';
  std::cout << str << endl;
  return 0;
}

// Answer: a
// Explanation: back() function modifies the last character of the string with the character provided.