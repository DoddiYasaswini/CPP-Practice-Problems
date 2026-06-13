#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int octal;
    cin >> octal;

    int decimal = 0;
    int power = 0;

    while (octal > 0) {
        int digit = octal % 10;
        decimal += digit * pow(8, power);
        power++;
        octal /= 10;
    }

    cout << decimal;

    return 0;
}
