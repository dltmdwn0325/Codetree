#include <iostream>

using namespace std;

int n;
int arr[10];

int GCD(int a, int b) {
    return b ? GCD(b, a%b) : a;
}

int LCM(int a, int b) {
    return a / (GCD(a, b)) * b;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int result = arr[0];
    for (int i=1; i<n; i++) {
        result = LCM(result, arr[i]);
    }

    cout << result;

    return 0;
}