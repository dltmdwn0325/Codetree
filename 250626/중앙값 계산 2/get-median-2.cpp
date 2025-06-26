#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];

int Medium_Value(int arr[], int n) {
    sort(arr, arr+n);
    return arr[n/2];
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int i=1; i<=n; i++) {
        if (i%2!=0) {
            cout << Medium_Value(arr, i) << " ";
        }
    }

    return 0;
}