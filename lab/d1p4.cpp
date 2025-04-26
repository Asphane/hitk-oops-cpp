#include <iostream>
#include <string>
using namespace std;

class Student 
{
private:
    string name;
    int rollNo;
    float marks;

public:
    void inputData() 
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayData() const 
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }

    float getMarks() const 
    {
        return marks;
    }
};

int main() 
{
    Student students[5];

    cout << "Enter details for 5 students:\n";
    for (int i = 0; i < 5; i++) 
    {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].inputData();
    }

    int topperIndex = 0;
    for (int i = 1; i < 5; i++) 
    {
        if (students[i].getMarks() > students[topperIndex].getMarks()) 
        {
            topperIndex = i;
        }
    }

    cout << "\nTopper's Information:\n";
    students[topperIndex].displayData();

    return 0;
}
