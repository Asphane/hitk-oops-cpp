#include <iostream>
using namespace std;

class Person 
{
private:
    string name;
    int age;

public:
    void acceptData() 
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() const 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() 
{
    Person p;

    p.acceptData();     
    p.displayData();   

    return 0;
}
