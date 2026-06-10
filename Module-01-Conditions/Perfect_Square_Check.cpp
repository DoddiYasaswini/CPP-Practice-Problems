#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number: ";
    cin >> n;

    int i = 1;

    while (i * i < n)
        i++;

    if (i * i == n)
        cout << "Perfect Square";
    else
        cout << "Not a Perfect Square";

    return 0;
}
