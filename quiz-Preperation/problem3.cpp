//  Which of the following C++ code will give error on compilation?

// ================code 1=================
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	cout<<"Hello World";
	return 0;
}
// ========================================
// ================code 2=================
#include <iostream>
int main(int argc, char const *argv[])
{
	std::cout<<"Hello World";
	return 0;
}


// Explanation: Neither code 1 nor code 2 will give an error as both are syntactically correct as in first code we have included namespace std and in second one we have used scope resolution operator to resolve the conflict