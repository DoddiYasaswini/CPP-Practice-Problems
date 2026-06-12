#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    for (int num = 1; num <= n; num++) {

        int temp = num;
        int sum = 0;

        while (temp > 0) {

            int digit = temp % 10;
            int fact = 1;

            for (int i = 1; i <= digit; i++)
                fact *= i;

            sum += fact;
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}
