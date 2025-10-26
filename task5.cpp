#include <iostream>
using namespace std;

int main() {
    srand(time(0));

    int num1 = rand() % 900 + 100;
    int num2 = rand() % 900 + 100;
    int answer, correctAnswer;

    cout << "Add the following numbers:" << endl;
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "------" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    correctAnswer = num1 + num2;
}
