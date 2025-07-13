#include <iostream>

using namespace std;

#define MAX_N 2000
#define OFFSET 1000

int x1[2], y1[2];
int x2[2], y2[2];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    int checked[MAX_N][MAX_N];

    for (int i=0; i<2; i++) {
        x1[i] += OFFSET;
        x2[i] += OFFSET;
        y1[i] += OFFSET;
        y2[i] += OFFSET;
    }

    for (int i=0; i<2; i++) {
        for (int j=x1[i]; j<x2[i]; j++) {
            for (int k=y1[i]; k<y2[i]; k++) {
                checked[j][k] = i+1;
            }
        }
    }

    int max_x = x1[0], max_y = y1[0];
    for (int i=x1[0]; i<x2[0]; i++) {
        for (int j=y1[0]; j<y2[0]; j++) {
            if (checked[i][j] == 1) {
                if (i>max_x) max_x = i;
                if (j>max_y) max_y = j;
            }
        }
    }

    int area = 0;
    for (int i=x1[0]; i<=max_x; i++) {
        for (int j=y1[0]; j<=max_y; j++) {
            if (x1[0]==max_x && y1[0]==max_y) {
                area = 0;
                break;
            }
            area++;
        }
    }

    cout << area;

    return 0;
}