#include <iostream>
using namespace std;

void print(int *p)
{
    cout << "Printing the address : " << p << endl;
}

void update(int *p)
{
    *p = *p + 1;
    // cout<<p;
}
int main()
{
    int num = 5;
    // pointer declare
    int *ptr = &num;

    //  passing address
    cout << " The address of the num : " << &num << endl;
    // passing value
    cout << " The value of the num : " << *ptr << endl;
    // size of the value
    cout << " The size of the num : " << sizeof(num) << endl;
    // size of the pointer
    cout << " The Pointer of the num : " << sizeof(ptr) << endl;
    // copying the values
    int *q = ptr;
    cout << " Copying the address :" << q << "-" << ptr << endl;
    cout << " Copying the value :" << *q << "-" << *ptr << endl;

    // arrray pointer
    int arr[4];
    cout << " The address of the first element of the array is : " << arr << endl;

    // calling a function
    int value = 5;
    int *p = &value;

    print(p);
    cout << "Before : " << *p << endl;

    update(p);
    cout << "After : " << *p<<endl;

    // Creating a doubly pointer

    int i = 5;
    int *pt = &i;
    int **ptrs = &pt;

    cout<<pt<<endl;
    cout<<&pt<<endl;
    cout<<*pt<<endl;
    cout<<i<<endl;


    return 0;
}