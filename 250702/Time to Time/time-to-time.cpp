#include <iostream>

using namespace std;

int Cal_Min(int h, int m) {
    return h*60 + m;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int answer = Cal_Min(c, d) - Cal_Min(a, b);
    cout << answer;

    return 0;
}