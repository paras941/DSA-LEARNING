#include <iostream>
using namespace std;
int main()
{
    int a ,b=1;
    a = 10;
    if (++a)
    {
        cout<<b;
    }else{
        cout<<++b;
    }

    int a = 1;
    int b = 2;

    if (a-- > 0 && ++b > 2)
    {
        cout << " This is under if ";
    }
    else
    {
        cout << " This is under else ";
    }
    cout << a << " " << b << endl;

                                        //  Fibonacci series 
    int n;
    int a1 = 0;
    int b1 = 1;
    cout << " Enter the value of n :- ";
    cin >> n;

    cout <<" The fibonacci series  of "<< n <<" is :- "<<  a1 << " " << b1 << " ";

    for (int i = 0; i <= n; i++)
    {
        int sum = a1 + b1;
        cout << sum << " ";

        a1 = b1;
        b1 = sum;
    }

                                        //  Practice question 

    for (int  i = 0; i <= 5 ; i--)
    {
        cout<< i << " ";
        i++;
        
    }

    // leetcode question
   int n = 234;
   int product = 1;
   int sum=0;
   

   while (n!=0)
   {
     int digit = n%10;
     product= product * digit;
     sum= sum + digit;
     n=n/10;
    }

   int subtraction = product - sum;

   cout << product <<endl<< sum <<endl<< subtraction;
   
    
   
    


    return 0;
}
