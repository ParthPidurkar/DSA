#include <iostream>
using namespace std;

int main() {
    string studentWithMinMarks;
    int minMarks = -1; // Initialize minMarks to a value that's guaranteed to be less than any valid marks

    for (int i = 0; i < 3; ++i) {
        string student;
        int marks;

        cout << "Enter the name of student " << char('A' + i) << ": ";
        cin >> student;

        cout << "Enter the marks of student " << char('A' + i) << ": ";
        cin >> marks;

        if (minMarks == -1 || marks < minMarks) {
            minMarks = marks;
            studentWithMinMarks = student;
        }
    }

    cout << "The student with the least marks is " << studentWithMinMarks << " with " << minMarks << " marks." << endl;

    return 0;
}
