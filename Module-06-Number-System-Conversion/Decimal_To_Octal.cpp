#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string octal = "";

    while (n > 0) {
        octal = char((n % 8) + '0') + octal;
        n /= 8;
    }

    cout << octal;

    return 0;
}
