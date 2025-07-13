#include <iostream>

using namespace std;

#define MAX_N 1000
#define OFFSET 100

int tile[MAX_N][2] = {0, };
int color[MAX_N]; // 0:White, 1:Black, 2:Gray, -1:None
bool is_gray[MAX_N] = {false};

int main() {
    int n;
    cin >> n;

    fill(color, color+MAX_N, -1);

    int now = OFFSET;
    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        cin >> x >> dir;

        int dx = (dir == 'L') ? -1 : 1;
        int paint = (dir == 'L') ? 0 : 1;

        for (int j=0; j<x; j++) {
            if (is_gray[now]) {
                now += dx;
                continue;
            }
            tile[now][paint]++;

            if (tile[now][0] >= 2 && tile[now][1] >= 2) {
                is_gray[now] = true;
                color[now] = 2;
            }
            else {
                color[now] = paint;
            }
            now += dx;
        }
        now -= dx;
    }

    int white = 0, black = 0, gray = 0;
    for (int i=0; i<MAX_N; i++) {
        if (color[i] == 0) white++;
        else if (color[i] == 1) black++;
        else if (color[i] == 2) gray++;
    }

    cout << white << " " << black << " " << gray;

    return 0;
}