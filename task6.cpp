#include<iostream>
using namespace std;
int main(){
    int quantity,discount,discountedPrice,PRICE_PER_UNIT,totalCost;
cout << "Enter the number of units sold: ";
cin >> quantity;
if (quantity <= 0) {
    cout << "Invalid input! Quantity must be greater than 0." << endl;
    return 1;
}
if (quantity >= 10 && quantity <= 19)
    discount = 0.20;
else if (quantity >= 20 && quantity <= 49)
    discount = 0.30;
else if (quantity >= 50 && quantity <= 99)
    discount = 0.40;
else if (quantity >= 100)
    discount = 0.50;
discountedPrice = PRICE_PER_UNIT * (1 - discount);
totalCost = quantity * discountedPrice;
cout << "Discount applied: " << discount * 100 << "%" << endl;
cout << "Total cost after discount: $" << totalCost << endl;

return 0;
}
