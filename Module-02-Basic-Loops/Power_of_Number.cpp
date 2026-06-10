#include <iostream>
using namespace std;

int main() {
    int a, b;
    int power = 1;

    cout << "Enter base and exponent: ";
    cin >> a >> b;

    for (int i = 1; i <= b; i++) {
        power = power * a;
    }

    cout << "Result = " << power;

    return 0;
}
