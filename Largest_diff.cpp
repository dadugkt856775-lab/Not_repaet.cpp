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

    int maxDiff = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = a[i] - a[j];

            if (diff < 0)
                diff = -diff;

            if (diff > maxDiff)
                maxDiff = diff;
        }
    }

    cout << "Largest difference = " << maxDiff;

    return 0;
}
