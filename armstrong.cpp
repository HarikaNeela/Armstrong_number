#include <iostream>
using namespace std;
int main()
 {
    int n, originalNum, rem, result = 0;
    cout << "Enter a number ";
    cin >> n;
    originalNum = n;
    while (originalNum != 0)
      {
       rem = originalNum % 10;
        result += rem * rem * rem;
        originalNum /= 10;
      }

    if (result == n)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";

    return 0;
 }

