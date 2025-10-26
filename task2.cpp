
#include <iostream>
#include <string>
using namespace std;

int main() {
    string color1, color2;

    cout << "Enter the first primary color : ";
    cin >> color1;
    cout << "Enter the second primary color : ";
    cin >> color2;

        if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red"))
            cout << "Mixing red and blue gives you purple." << endl;
        else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red"))
            cout << "Mixing red and yellow gives you orange." << endl;
        else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue"))
            cout << "Mixing blue and yellow gives you green." << endl;
        else
            cout << "Unexpected input." << endl;
    return 0;
    }
