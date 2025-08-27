#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> grid(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    vector<vector<int>> sum_grid(N+1, vector<int>(N+1, 0));
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            sum_grid[i][j] = sum_grid[i-1][j] + sum_grid[i][j-1] - sum_grid[i-1][j-1] + grid[i-1][j-1];
        }
    }

    int max_cnt = 0;
    for (int i=0; i<=N-3; i++) {
        for (int j=0; j<=N-3; j++) {
            int sum = sum_grid[i+3][j+3] - sum_grid[i+3][j] - sum_grid[i][j+3] + sum_grid[i][j];
            max_cnt = max(sum, max_cnt);
        }
    }

    cout << max_cnt;

    return 0;
}
