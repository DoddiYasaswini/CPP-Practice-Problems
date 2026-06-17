#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cin >> target;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            cout << "Found at Index " << i;
            return 0;
        }
    }

    cout << "Not Found";

    return 0;
}
