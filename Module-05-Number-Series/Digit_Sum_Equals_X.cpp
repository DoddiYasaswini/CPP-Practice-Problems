#include <iostream>
using namespace std;

int main() {
    int n, x;

    cout << "Enter n and target digit sum: ";
    cin >> n >> x;

    for (int num = 1; num <= n; num++) {

        int temp = num;
        int sum = 0;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == x)
            cout << num << " ";
    }

    return 0;
}
