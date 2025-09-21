#include<iostream>
using namespace std;
int main (){
     int n;
    char ch = 'A';
    cout << " Enter the value of the n ";
    cin >> n;
    

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout<< ch<< " ";
            ch = ch +1;
        }
        cout<<endl;
        
    }
return 0;
}