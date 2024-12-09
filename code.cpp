#include <iostream>
using namespace std;

// Define a structure
struct Student
{
    int rollNumber; // Member 1
    string name;    // Member 2
    float marks;    // Member 3
};

int main()
{
    // Create a structure variable
    Student student1;

    // Assign values to the structure members
    student1.rollNumber = 1;
    student1.name = "Akshat";
    student1.marks = 85.5;

    // Access and display structure members
    cout << "Student Details:" << endl;
    cout << "Roll Number: " << student1.rollNumber << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Marks: " << student1.marks << endl;

    return 0;
}
