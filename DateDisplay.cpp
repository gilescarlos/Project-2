#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    Date date1, date2;

    cout << endl << "Enter a date to test operations" << endl << endl;
    cin >> date1;

    cout << endl << "Enter a date to test subtraction operation" << endl << endl;
    cin >> date2;

    cout << endl;
    cout << "Testing subtraction: " << endl;
    cout << "Number of days between the first date and the second date: " << date1 - date2 << endl;

    cout << endl;
    cout << "Testing Prefix Increment: " << endl;
    ++date1;
    date1.printDateV1();
    date1.printDateV2();
    date1.printDateV3();
    cout << endl;

    cout << "Testing Postfix Increment: " << endl;
    date1++;
    date1.printDateV1();
    date1.printDateV2();
    date1.printDateV3();
    cout << endl;

    cout << "Testing Prefix Decrement: " << endl;
    --date2;
    date2.printDateV1();
    date2.printDateV2();
    date2.printDateV3();
    cout << endl;

    cout << "Testing Postfix Decrement: " << endl;
    date2--;
    date2.printDateV1();
    date2.printDateV2();
    date2.printDateV3();
    cout << endl;

    return 0;
}