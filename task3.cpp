#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    double middle;

    if ((a >= b && a <= c) || (a >= c && a <= b))
        middle = a;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        middle = b;
    else
        middle = c;

    cout << "The middle value is: " << middle << endl;

    return 0;
}
