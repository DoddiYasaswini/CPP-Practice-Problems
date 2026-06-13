#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string hex;
    cin >> hex;

    int decimal = 0;
    int power = 0;

    for (int i = hex.length() - 1; i >= 0; i--) {

        int value;

        if (hex[i] >= '0' && hex[i] <= '9')
            value = hex[i] - '0';
        else
            value = hex[i] - 'A' + 10;

        decimal += value * pow(16, power);
        power++;
    }

    cout << decimal;

    return 0;
}
