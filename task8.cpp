#include<iostream>
using namespace std;
int main() {
    int age,activities,fee,reduction,finalFee;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the number of activities attended: ";
    cin >> activities;
    if (age <= 6) {
        fee = 5.0;
        reduction = 0.75;
    }
    else if (age >= 7 && age <= 12) {
        fee = 10.0;
        reduction = 1.25;
    }
    else if (age >= 13 && age <= 18) {
        fee = 15.0;
        reduction = 2.0;
    }
    else if (age > 18) {
        fee = 25.0;
        reduction = 2.0;
    }
    else {
        cout << "Invalid age entered!" << endl;
        return 1;
    }
    finalFee = fee - (activities * reduction);
    if (finalFee < 1.0)
        finalFee = 1.0;
    cout << "Your membership fee is: $" << finalFee << endl;

    return 0;
}
