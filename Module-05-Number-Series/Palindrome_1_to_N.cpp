#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    for (int num = 1; num <= n; num++) {

        int temp = num;
        int rev = 0;

        while (temp > 0) {
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }

        if (rev == num)
            cout << num << " ";
    }

    return 0;
}
