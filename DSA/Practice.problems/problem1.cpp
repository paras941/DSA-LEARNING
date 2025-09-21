                //   First question of the geeksforgeeks

#include <iostream>
using namespace std;
class solution
{
public:
    string checkn(int n)
    {
        if (n == 5)
        {
            return " equal to 5";
        }
        else if (n < 5) {
                return " Smaller than 5";
            }
        
        else {
            return " Greater than 5";
        }
    }
};
int main(){
    solution obj;
    int n;
    cout<< " Enter the value of the n:"<<endl;
    cin>>n;

    cout<< obj.checkn(n)<<endl;
    return 0;
}