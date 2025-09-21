#include <iostream>
using namespace std;

int main() {
    //  largest number
    int arr[] = {10, 25, 7, 98, 56};
    int n = 5;
    int maxVal = arr[0];

    for(int i=1; i<n; i++) {
        if(arr[i] > maxVal) maxVal = arr[i];
    }

    cout << "Largest element: " << maxVal << endl;
}
