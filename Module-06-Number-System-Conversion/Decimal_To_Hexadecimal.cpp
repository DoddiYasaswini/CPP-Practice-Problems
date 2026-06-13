#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string hex = "";

    while (n > 0) {
        int rem = n % 16;

        if (rem < 10)
            hex = char(rem + '0') + hex;
        else
            hex = char(rem - 10 + 'A') + hex;

        n /= 16;
    }

    cout << hex;

    return 0;
}
