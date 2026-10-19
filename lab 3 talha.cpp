#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, department;
    int age, birthYear;
    float gpa;
    char grade;
    double fee;

    // Input student information
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your GPA: ";
    cin >> gpa;

    cout << "Enter your department: ";
    cin >> department;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    // Input grade and fee
    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Enter your fee: ";
    cin >> fee;

    // Display student information
    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;
    cout << "Birth Year: " << birthYear << endl;

    // Display grade and fee
    cout << "\nStudent Details" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Fee: " << fee << endl;

    return 0;
}