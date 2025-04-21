#include <iostream>
#include <string>
using namespace std;

struct Student {
    string student_name;
    int roll_no;

    // Function to accept student info
    void accept() {
        cout << "Enter student name: ";
        getline(cin, student_name);
        cout << "Enter roll number: ";
        cin >> roll_no;
        cin.ignore(); // to clear newline character from buffer
    }

    // Function to display student info
    void display() {
        cout << "\nStudent Name: " << student_name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};

int main() {
    // add loop for multiple students
    Student s;
    s.accept();
    s.display();

    return 0;
}
