#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "===== LAB 4: CONTROL STRUCTURES =====" << endl;
    cout << "1. Check Pass or Fail" << endl;
    cout << "2. Check Even or Odd" << endl;
    cout << "3. Find Larger Number" << endl;
    cout << "4. Print Numbers 1 to 20" << endl;
    cout << "5. Print Star Pattern" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        case 1: {
            int marks;

            cout << "Enter marks: ";
            cin >> marks;

            if (marks >= 50) {
                cout << "Pass" << endl;
            } else {
                cout << "Fail" << endl;
            }
            break;
        }

        case 2: {
            int num;

            cout << "Enter a number: ";
            cin >> num;

            if (num % 2 == 0) {
                cout << "Even" << endl;
            } else {
                cout << "Odd" << endl;
            }
            break;
        }

        case 3: {
            int a, b;

            cout << "Enter first number: ";
            cin >> a;

            cout << "Enter second number: ";
            cin >> b;

            if (a > b) {
                cout << "Larger number is: " << a << endl;
            } else if (b > a) {
                cout << "Larger number is: " << b << endl;
            } else {
                cout << "Both numbers are equal" << endl;
            }
            break;
        }

        case 4: {
            int option;

            cout << "1. Using for loop" << endl;
            cout << "2. Using while loop" << endl;
            cout << "Choose loop: ";
            cin >> option;

            if (option == 1) {
                for (int i = 1; i <= 20; i++) {
                    cout << i << " ";
                }
            } else if (option == 2) {
                int i = 1;

                while (i <= 20) {
                    cout << i << " ";
                    i++;
                }
            } else {
                cout << "Invalid loop choice";
            }

            cout << endl;
            break;
        }

        case 5: {
            for (int i = 1; i <= 5; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        }

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}