#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int answer = 0;
    for (int i=0; i<n; i++) {
        int cnt = 1, best = 1;
        for (int j=0; j<n-1; j++) {
            if (grid[i][j] == grid[i][j+1]) {
                cnt++;
            }
            else cnt = 1;
            best = max(cnt, best);
        }
        if (best>=m) answer++;
    }

    for (int j=0; j<n; j++) {
        int cnt = 1, best = 1;
        for (int i=0; i<n-1; i++) {
            if (grid[i][j] == grid[i+1][j]) {
                cnt++;
            }
            else cnt = 1;
            best = max(cnt, best);
        }
        if (best>=m) answer++;
    }

    cout << answer;

    return 0;
}
