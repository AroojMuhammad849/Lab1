#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade A";
    else if (marks >= 75)
        cout << "Grade B";
    else if (marks >= 50)
        cout << "Grade C";
    else
        cout << "Grade F";

    cout << endl;

    // Multiplication Table
    int num;
    cout << "\nEnter a number to print its multiplication table: ";
    cin >> num;

    cout << "Multiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}