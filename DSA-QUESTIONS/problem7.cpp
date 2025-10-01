#include <iostream> 
#include <string>
#include <cstring>
using namespace std; 
int main(int argc, char const *argv[])
{
	const char *a = "Hello\0World";
	cout<<a;
	return 0;
}

// Answer: a
// Explanation: char* are terminated by a ‘\0’ character so the string “Hello\0World” will be cut down to “Hello”