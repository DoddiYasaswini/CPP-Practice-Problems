#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int freq[10] = {0};
    bool unique = true;

    while(n > 0) {
        int digit = n % 10;

        freq[digit]++;

        if(freq[digit] > 1) {
            unique = false;
            break;
        }

        n /= 10;
    }

    if(unique)
        cout << "Unique Digits";
    else
        cout << "Not Unique";

    return 0;
}
