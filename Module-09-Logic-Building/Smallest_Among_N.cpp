#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x, smallest;

    cin >> smallest;

    for(int i = 1; i < n; i++) {
        cin >> x;

        if(x < smallest)
            smallest = x;
    }

    cout << smallest;

    return 0;
}
