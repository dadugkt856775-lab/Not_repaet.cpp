#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }

        if (count == 1) {
            cout << "First non-repeating element = " << a[i];
            return 0;
        }
    }

    cout << "No non-repeating element found.";

    return 0;
}
