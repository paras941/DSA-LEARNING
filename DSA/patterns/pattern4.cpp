#include<iostream>
using namespace std;
int main (){

    //making this pattern
    // 1
    // 2   3
    // 3   4   5
    // 4   5   6   7

    int n;
    // int i;

    cout << " Enter the value of the n ";
    cin>>n;
    // int value = n;

    for (int i = 1; i <=n; i++)
    {
        int value = i;
        for (int j = 1; j <= i; j++)
        {
            // cout<<value<<" ";
            // value++;
            cout<<(i+j-1)<<" ";
        }
        cout<<endl;

    }
return 0;
}