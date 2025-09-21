#include<iostream>
using namespace std;
int main (){

     /* making this patttern 
      A     B     C
      A     B     C
      A     B     C  */

      int n ;
    //   int value = 'A';
      cout << " Enter the value of the n ";
      cin >> n;  
      
      for (int i = 1; i <= n; i++)
      {
        for (int j = 1; j <= n; j++)
        {
            char ch = ( 'A'+j-1);
            cout<<ch<<" ";
            
        }
        cout<<endl;
        
      }

return 0;
}