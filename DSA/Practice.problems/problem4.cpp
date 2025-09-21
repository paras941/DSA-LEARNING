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