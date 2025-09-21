#include <iostream>
using namespace std;

class Student
{

private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << a << "" << b << "" << c << "" << endl;
    }
};

void Student ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Student s1;

    s1.setdata(1, 2, 3);
    s1.getdata();

    return 0;
}