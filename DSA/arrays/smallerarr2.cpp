#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 45, 43};
    int n = 6;
    int minVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    cout << "Smallest element: " << minVal << endl;

    return 0;
}