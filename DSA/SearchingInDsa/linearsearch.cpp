#include<iostream>
using namespace std;

 int Searchkey(int n, int arr[],int key){
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==key)
            {
                return i;
            }else{
                return -1;
            }
            
        }
        
    }
int main (){
    int key;
    int arr[]={10,20,30,40,50};
    int n=5;
    int i;
    cout<<" Enter the value of the key";
    cin>>key;

   int result= Searchkey(n,arr,key);
    if(result != i){
        cout<<" Key found";
    }else{
        cout<<" not found";
    }



    
return 0;
}