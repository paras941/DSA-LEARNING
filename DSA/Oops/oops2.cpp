#include<iostream>
using namespace std;

class Teacher{
     public:
     int id;
     string name;
     double salary;
};

int main (){
    Teacher t1;
    t1.id =  2320594;
    t1.name = " paras";
    t1.salary = 34242;

    cout<<"the id of the teacher is : " << t1.id<< endl;
    cout<<"the name of the teacher is : " << t1.name<< endl;
    cout<<"the salary of the teacher is : " << t1.salary<< endl;

return 0;
}
