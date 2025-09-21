#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main (){
    //  for the array
    array <int,4> q = {1,2,3,4};
    int size = q.size();

    for (int  i = 0; i < size; i++)
    {
        cout << q[i] << " " << endl; // Accessing elements using the subscript operator
    }

    cout<< " The third element of the array is :"<< q.at(2) << endl; // Accessing the third element using at()
    cout << " The first element of the array is :"<< q.front() << endl; // Accessing the first element using front()
    cout << " The last element of the array is :"<< q.back() << endl; // Accessing the last element using back()   
    cout << " The size of the array is :-"<< q.size() << endl; // Getting the size of the array
    cout << " The maximum size of the array is :"<< q.max_size() << endl;
    
  //  for the vector

      vector<int> v ;
        v.push_back(1);
        v.push_back(2); 
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        v.push_back(6); 
        v.push_back(7);

        cout << " The size of the vector is : " << v.size() << endl; // Getting the size of the vector



return 0;
}