#include <iostream>
using namespace std;

int main() {
    int n, digit;
    int smallest = 9;

    cout << "Enter number: ";
    cin >> n;

    while (n > 0) {
        digit = n % 10;

        if (digit < smallest)
            smallest = digit;

        n = n / 10;
    }

    cout << "Smallest digit = " << smallest;

    return 0;
}
