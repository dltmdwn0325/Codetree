#include <iostream>

using namespace std;

#define MAX_N 200

int main() {
    int n, x1, x2;
    int line[MAX_N] = {0, };
    cin >> n;

    int end=0;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        x1 += 100;
        x2 += 100;
        if (x2 > end) {
            end = x2;
        }
        for (int j=x1; j<x2; j++) {
            line[j]++;
        }
    }

    int max=0;
    for (int i=0; i<end; i++) {
        if (line[i]>max) {
            max = line[i];
        }
    }

    cout << max;

    return 0;
}