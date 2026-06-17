#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x, largest;

    cin >> largest;

    for(int i = 1; i < n; i++) {
        cin >> x;

        if(x > largest)
            largest = x;
    }

    cout << largest;

    return 0;
}
