#include <iostream>
using namespace std;

int main() {

int counter = 1;
int number;
int largest = 0;


  while (counter < 11)
    {
        cout << "Enter your number: " << endl;
        cin >> number;

        if (number > largest)
        {
            largest = number;
        }

        counter++;
    }

    cout << "The highest number is: " << largest << endl;

    return 0;
};