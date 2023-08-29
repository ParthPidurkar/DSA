#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;
    cout << "Enter the length of side c: ";
    cin >> c;

    if (a == b && b == c) {
        cout << "Equilateral Triangle" << endl;
    } else if (a != b && b != c && a != c) {
        cout << "Scalene Triangle" << endl;
    } else {
        cout << "Isosceles Triangle" << endl;
    }

    return 0;
}
