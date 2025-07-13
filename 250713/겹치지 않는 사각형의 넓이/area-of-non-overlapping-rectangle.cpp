#include <iostream>

using namespace std;

#define MAX_N 3000
#define OFFSET 1000

int x1[3], y1[3];
int x2[3], y2[3];
int dim[MAX_N][MAX_N] = {0, };

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    for (int i=0; i<3; i++) {
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;

        for (int j=x1[i]; j<x2[i]; j++) {
            for (int k=y1[i]; k<y2[i]; k++) {
                if (i == 2) {
                    if (dim[j][k] > 0) dim[j][k] = 0;
                    else continue;
                }
                else {
                    dim[j][k]++;
                }
            }
        }
    }

    int result = 0;
    for (int i=0; i<MAX_N; i++) {
        for (int j=0; j<MAX_N; j++) {
            if (dim[i][j] > 0) {
                result++;
            }
        }
    }

    cout << result;

    return 0;
}