#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;

    cout << "Enter the coordinates of point 1 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of point 2 (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of point 3 (x3 y3): ";
    cin >> x3 >> y3;

    int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (area == 0) {
        cout << "All three points are on the same straight line" << endl;
    } else {
        cout << "The points are not on the same straight line" << endl;
    }

    return 0;
}
