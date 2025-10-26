#include <iostream>
using namespace std;

int main() {
    int month, year;
    cout << "Enter a month (1 to 12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;
    int days;
    bool isLeap = false;
    if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
        isLeap = true;
    if (month == 2) {
        days = (isLeap ? 29 : 28);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month >= 1 && month <= 12) {
        days = 31;
    } else {
        cout << "Invalid month entered!" << endl;
        return 0;
    }

    cout << days << " days" << endl;

    return 0;
}
