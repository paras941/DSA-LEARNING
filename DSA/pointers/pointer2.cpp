#include<iostream>
using namespace std;
int main (){

    int i =5;
    int j = 18;
    int *p = &j;
    *p=9;
    
    float number = 1.4;
    cout<< number++<<endl;
    cout<< (number)++<<endl;



    cout<<i<<" "<<j<< endl;
    cout<<&p<<endl;
    cout<<&i<<endl;
    cout<<p<<endl;



return 0;
}