#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int count500 = 0, count100 = 0, count50 = 0, count20 = 0, count10 = 0;

        switch (amount) {
            case 500:
                amount -= 500;
                count500++;
                cout << "Notes of \"500\" = " << count500 << endl;
                break;
            case 100:
                amount -= 100;
                count100++;
                cout << "Notes of \"100\" = " << count100 << endl;
                break;
            case 50:
                amount -= 50;
                count50++;
                cout << "Notes of \"50\" = " << count50 << endl;
                break;
            case 20:
                amount -= 20;
                count20++;
                cout << "Notes of \"20\" = " << count20 << endl;
                break;
            case 10:
                amount -= 10;
                count10++;
                cout << "Notes of \"10\" = " << count10 << endl;
                break;
            default:
                cout << "Invalid amount" << endl;
                return 1;
        }
    



    return 0;
}
