#include <iostream>

using namespace std;

#define MAX_N 200

int main() {
    int n, x;
    char dir;
    int path[MAX_N] = {0, };

    cin >> n;

    int start = 100;
    int end;
    for (int i = 0; i < n; i++) {
        cin >> x >> dir;
        if (dir == 'L') {
            end = start - x;
        }
        else {
            end = start + x;
        }
        for (int j=min(start, end); j<max(start, end); j++) {
                path[j]++;
            }
        start = end;
    }

    int cnt = 0;
    for (int i=0; i<MAX_N; i++) {
        if (path[i] >= 2) {
            cnt++;
        }
    }
    
    cout << cnt;

    return 0;
}