#include <iostream>

using namespace std;

#define MAX_N 200
#define OFFSET 100

int main() {
    int N;
    cin >> N;

    int square[MAX_N][MAX_N] = {0, };

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        x += OFFSET;
        y += OFFSET;
        for (int j=x; j<x+8; j++) {
            for (int k=y; k<y+8; k++) {
                square[j][k]++;
            }
        }
    }

    int result = 0;
    for (int i=0; i<MAX_N; i++) {
        for (int j=0; j<MAX_N; j++) {
            if (square[i][j] > 0) {
                result++;
            }
        }
    }

    cout << result;

    return 0;
}