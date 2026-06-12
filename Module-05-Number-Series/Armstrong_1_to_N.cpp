#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    for (int num = 1; num <= n; num++) {

        int temp = num;
        int count = 0;

        while (temp > 0) {
            count++;
            temp /= 10;
        }

        temp = num;
        int sum = 0;

        while (temp > 0) {
            int digit = temp % 10;

            int power = 1;
            for (int i = 1; i <= count; i++)
                power *= digit;

            sum += power;
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}
