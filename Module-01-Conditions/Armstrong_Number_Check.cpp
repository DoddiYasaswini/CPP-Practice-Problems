#include <iostream>
using namespace std;
int main() {
    int n, temp, digit;
    int count = 0;
    int sum = 0;
    cout << "Enter number: ";
    cin >> n;
    temp = n;
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        int power = 1;
        for (int i = 1; i <= count; i++)
            power *= digit;
        sum += power;
        temp /= 10;
    }
    if (sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";
    return 0;
}
