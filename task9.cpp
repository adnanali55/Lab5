#include <iostream>
using namespace std;

int main() {
    double weight, distance, charge;
    double rate;
    do {
        cout << "Enter the weight of the package (in kg): ";
        cin >> weight;
        if (weight <= 0 || weight > 20) {
            cout << "Invalid weight. Weight must be greater than 0 and not more than 20 kg." << endl;
        }
    } while (weight <= 0 || weight > 20);
    do {
        cout << "Enter the distance to ship (in miles): ";
        cin >> distance;
        if (distance < 10 || distance > 3000) {
            cout << "Invalid distance. Distance must be between 10 and 3000 miles." << endl;
        }
    } while (distance < 10 || distance > 3000);
    if (weight <= 2) {
        rate = 1.10;
    } else if (weight <= 6) {
        rate = 2.20;
    } else if (weight <= 10) {
        rate = 3.70;
    } else {
        rate = 4.80;
    }
    charge = rate * (distance / 500);
    if (distance != charge)
    cout << "The shipping charge is: $" << charge << endl;

    return 0;
}
