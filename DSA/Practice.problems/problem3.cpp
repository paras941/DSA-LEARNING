#include<iostream>
using namespace std;
    class solution{
    public:
    void printgeek(){
    string name = " geeks";
    string site = " forgeeks";


    string full = name+site ;
    cout << full<<endl;
    cout<< name.size()<<endl;
    cout<<name[3];
    }
};
int main(){
    solution obj;
    obj.printgeek();
    return 0;
}

