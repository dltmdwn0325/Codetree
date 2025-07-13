#include <iostream>

using namespace std;

#define MAX_N 2000
#define OFFSET 1000

int dim[MAX_N][MAX_N] = {0, };

int main() {
    int N;
    cin >> N;

    int cur = OFFSET;
    int result = 0;

    for (int i = 0; i < N; i++) {
        int x1, y1;
        int x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int i=cur+x1; i<cur+x2; i++) {
            for (int j=cur+y1; j<cur+y2; j++) {
                if (dim[i][j] > 0) continue;
                dim[i][j]++;
                result += dim[i][j];
            }
        }
    }

    cout << result;

    return 0;
}