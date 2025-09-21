#include<iostream>
using namespace std;
int main (){


    int arr[] = {2, 45, 43,32,32,323};
    int n = 6;
   for(int i=0;i<n/2;i++) swap(arr[i], arr[n-i-1]);
    cout << "Reversed Array: ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;

return 0;
}