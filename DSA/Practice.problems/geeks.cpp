//                    First question of the geeksforgeeks

// #include <iostream>
// using namespace std;
// class solution
// {
// public:
//     string checkn(int n)
//     {
//         if (n == 5)
//         {
//             return " equal to 5";
//         }
//         else if (n < 5) {
//                 return " Smaller than 5";
//             }
        
//         else {
//             return " Greater than 5";
//         }
//     }
// };
// int main(){
//     solution obj;
//     int n;
//     cout<< " Enter the value of the n:"<<endl;
//     cin>>n;

//     cout<< obj.checkn(n)<<endl;
//     return 0;


//    Second code of the geeks forgeeks

// #include<iostream>
// #include<string>
// using namespace std;



// class solution{
//     public:
//     void printHello(){
//         cout<<"";
//     }
// };
// int main (){
//     solution obj;
//     obj.printHello();

// }

// Question number Third of the geeksforgeeks
// class solution{
//     public:
//     void printgeek(){
//     string name = " geeks";
//     string site = " forgeeks";


//     string full = name+site ;
//     cout << full<<endl;
//     cout<< name.size()<<endl;
//     cout<<name[3];
//     }
// };
// int main(){
//     solution obj;
//     obj.printgeek();
//     return 0;
// }
    //  Fourth question of the geeksforgeek
#include<iostream>
#include<string>
using namespace std;

class Solution {
  public:
    void printHollowSquare(int s) {
        for (int i = 0; i < s; i++) {
            if (i == 0 || i == s - 1) {
                for (int j = 0; j < s; j++) {
                    cout << "* ";
                }
            } else {
                cout << "* ";
                for (int j = 0; j < 2 * (s - 2); j++) {
                    cout << " ";
                }
                cout << "*";
            }
            cout << endl;
        }
    for (int i =0; i<=s ; i++);
      cout<< "*"; 

    }
};

int main() {
    int s;
    cin >> s;

    Solution obj;
    obj.printHollowSquare(s);

    return 0;
}
   