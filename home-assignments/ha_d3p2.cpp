#include<iostream>
using namespace std;

class Employee;
class Boss{
public :
    void IncreaseSal(Employee &emp, int amt);
};

class Employee{
    int sal=0;
public:
    Employee(int sal){
        this->sal=sal;
    }

    void display(){
        cout<<"Salary: "<<sal<<endl;
    }

    friend class Boss;
};

void Boss::IncreaseSal(Employee& emp, int amt){
    emp.sal+=amt;
    cout<<"Salary increased by "<<amt<<endl;
    cout<<"After increment salary is: "<<emp.sal<<endl;
}

int main(){
    int sal;
    cout<<"Enter salary: ";
    cin>>sal;
    Employee e(sal);
    Boss b;

    cout << "Before increment:" << endl;
    e.display();

    int amt;
    cout<<"Enter amount to increase: ";
    cin>>amt;
    b.IncreaseSal(e, amt);


}