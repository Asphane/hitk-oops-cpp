#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string student_name;
    int roll_no;

public:
    void accept() 
    {
        cout << "Enter student name: ";
        getline(cin, student_name);
        cout << "Enter roll number: ";
        cin >> roll_no;
        cin.ignore();
    }

    // Function to display student info
    void display() 
    {
        cout << "\nStudent Name: " << student_name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};

int main() 
{
    Student s;
    s.accept();
    s.display();

    return 0;
}
