#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Constructor
    Student(string studentName, int studentRollNumber, float studentMarks) {
        name = studentName;
        rollNumber = studentRollNumber;
        marks = studentMarks;
        cout << "Student " << name << " created." << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student " << name << " is being deleted." << endl;
    }

    // Function to display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Creating an object of Student
    Student student1("Alice", 101, 95.5);

    // Displaying student details
    student1.displayDetails();

    return 0;
}

