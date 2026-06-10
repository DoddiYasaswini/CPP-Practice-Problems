#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter limit: ";
    cin >> n;
    int a = 0, b = 1, c;
    while (a <= n) {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
