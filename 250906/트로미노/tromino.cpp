#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Max_Block1(const vector<vector<int>>& grid, int n, int m) {
    int best = 0;
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<m-1; j++) {
            int b1 = grid[i][j], b2 = grid[i][j+1], b3 = grid[i+1][j], b4 = grid[i+1][j+1];
            int sum = b1+b2+b3+b4;
            int min_num = min({b1, b2, b3, b4});
            best = max(best, sum-min_num);
        }
    }
    return best;
}

int Max_Block2(const vector<vector<int>>& grid, int n, int m) {
    int best = 0;

    // 가로 1x3
    for (int i=0; i<n; i++) {
        if (m < 3) continue;
        int window = grid[i][0] + grid[i][1] + grid[i][2];
        for (int j=3; j<m; j++) {
            window += grid[i][j] - grid[i][j-3];
            best = max(best, window);
        }
    }

    // 세로 3x1
    for (int j=0; j<m; j++) {
        if (n < 3) continue;
        int window = grid[0][j] + grid[1][j] + grid[2][j];
        for (int i=3; i<n; i++) {
            window += grid[i][j] - grid[i-3][j];
            best = max(best, window);
        }
    }

    return best;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int answer = 0;
    answer = max(Max_Block1(grid, n, m), Max_Block2(grid, n, m));
    cout << answer;

    return 0;
}
