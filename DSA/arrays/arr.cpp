#include<iostream>
using namespace std;
int main (){
    int arr[]={1,32,39,53,23,65,5};
    cout<<"Size of the array : "<< sizeof(arr)<<endl;

    cout<<"Element of the array : ";
    for (int  i = 0; i < 6; i++)
    {
        cout<< arr[i]<<" ";
    }
    
return 0;
}