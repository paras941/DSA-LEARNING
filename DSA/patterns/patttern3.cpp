#include<iostream>
using namespace std;
int main (){

    //  Triangle shapes star pattern

    int n;
    cout<< " Enter the value of the n";
    cin>>n;
    int count = 1;

     for (int i = 1; i <= n; i++)
     {
        for (int  j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;

     }
return 0;
}