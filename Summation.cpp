#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n], evenPos[n], oddPos[n], evenSum = 0, oddSum = 0, evenCount = 0, oddCount = 0;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (i % 2 == 0) {
            evenPos[evenCount++] = arr[i];
            evenSum += arr[i];
        } else {
            oddPos[oddCount++] = arr[i];
            oddSum += arr[i];
        }
    }

    cout << "Even positioned elements: ";
    for (int i = 0; i < evenCount; ++i) {
        cout << evenPos[i] << " ";
    }

    cout << "\nOdd positioned elements: ";
    for (int i = 0; i < oddCount; ++i) {
        cout << oddPos[i] << " ";
    }

    cout << "\nSum of even positioned elements: " << evenSum << endl;
    cout << "Sum of odd positioned elements: " << oddSum << endl;

    return 0;
}
