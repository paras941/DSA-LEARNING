#include<iostream>
using namespace std;
int main (){
      // 7. Check if Array is 
      int arr[]={23,34,23,23};
      int n= 5;
    bool sorted = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sorted = false;
            break;
        }
    }
    cout << "Array is " << (sorted ? "Sorted" : "Not Sorted") << endl;
    
return 0;
}