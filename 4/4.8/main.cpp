#include <iostream>

using namespace std;

int main() {
    unsigned int x;
    unsigned int y;
    unsigned int i = 1;
    unsigned int power = 1;

    cout << "Enter value for x" << endl;
    cin >> x;
    cout << "Enter value for y" << endl;
    cin >> y;

    while (i <= y)
    {
        power = power * x;
        i++;
    }

    cout << power;

    return 0;
};