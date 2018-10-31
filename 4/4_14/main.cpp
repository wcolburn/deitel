#include <iostream>

using namespace std;

int main() {

    cout << "Enter account number (or -1 to quit): " << endl;
     int accountNumber = 1;
    cin >> accountNumber;

    if (accountNumber > -1)
    {
        cout << "Enter beginning balance: " << endl;
         int beginningBalance;
        cin >> beginningBalance;

        cout << "Enter total charges: " << endl;
          int totalCharges;
        cin >> totalCharges;

        cout << "Enter total credits: " << endl;
          int totalCredits;
        cin >> totalCredits;

        cout << "Enter credit limit: " << endl;
          int creditLimit;
        cin >> creditLimit;

         int newbal = beginningBalance + totalCharges - totalCredits;

        if (newbal > creditLimit)
        {
            cout << "Credit limit exceeded." << endl;
        }
    }


    return 0;
}