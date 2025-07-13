#include <iostream>

using namespace std;

#define MAX_N 200000
#define OFFSET 100000

int tile[MAX_N] = {0, }; //W=1, R=2;

int main() {
    int n;
    cin >> n;

    int cur = OFFSET;

    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        cin >> x >> dir;

        if (dir=='L') {
            while(x--) {
                tile[cur] = 1;
                if (x) cur--; 
            }
        }
        else {
            while(x--) {
                tile[cur] = 2;
                if (x) cur++;
            }
        }
    }

    int w = 0, b = 0;
    for (int i=0; i<MAX_N; i++) {
        if (tile[i] == 1) w++;
        else if (tile[i] == 2) b++;
    }

    cout << w << " " << b;

    return 0;
}