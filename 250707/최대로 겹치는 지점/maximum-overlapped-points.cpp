#include <iostream>

using namespace std;

#define MAX_N 100

int main() {
    int n, x1, x2;
    int block[MAX_N] = {};
    cin >> n;

    int end=0;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        if (x2 > end) {
            end = x2;
        }
        for (int j=x1; j<=x2; j++) {
            block[j]++;
        }
    }
    int max=0;
    for (int i=0; i<=end; i++) {
        if (max < block[i]) {
            max = block[i];
        }
    }

    cout << max;
    
    return 0;
}