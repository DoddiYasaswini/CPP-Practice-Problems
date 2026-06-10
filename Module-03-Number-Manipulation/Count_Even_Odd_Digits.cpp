#include <iostream>
using namespace std;

int main() {
    int n, digit;
    int evenCount = 0, oddCount = 0;

    cout << "Enter number: ";
    cin >> n;

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 == 0)
            evenCount++;
        else
            oddCount++;

        n = n / 10;
    }

    cout << "Even digits = " << evenCount << endl;
    cout << "Odd digits = " << oddCount;

    return 0;
}
