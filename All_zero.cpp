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

    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[position] = a[i];
            position++;
        }
    }

    // Fill remaining positions with zeros
    while (position < n) {
        a[position] = 0;
        position++;
    }

    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
