#include <iostream>

using namespace std;


int main() {
   unsigned int product = 1;
   unsigned int a = 1;

   while (a < 6)
   {
       product = product * a;
       a++;
   }

    cout << "The product is: " << product << endl;

   return 0;
}