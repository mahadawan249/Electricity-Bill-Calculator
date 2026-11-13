#include <string>
#include <iostream>
using namespace std;

int main() {
    string customerName;
    float units, bill;

    cout << "Enter customer name: ";
    cin >> customerName;
    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= 100)
        bill = units * 10;
    else if (units <= 300)
        bill = 100 * 10 + (units - 100) * 15;
    else
        bill = 100 * 10 + 200 * 15 + (units - 300) * 20;

    cout << "\nElectricity Bill for " << customerName << endl;
    cout << "Units consumed: " << units << endl;
    cout << "Total bill: Rs. " << bill << endl;

    if (bill >= 5000)
        cout << "Please pay your bill promptly." << endl;
    else
        cout << "Thank you for your payment." << endl;

    return 0;
}
