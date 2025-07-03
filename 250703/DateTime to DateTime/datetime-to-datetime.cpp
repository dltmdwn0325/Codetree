#include <iostream>

using namespace std;

int DateTime(int d, int h, int m) {
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int start_date = 0;
    for (int i=1; i<11; i++) {
        start_date += num_of_days[i];
    }
    start_date += d-1;
    int start = 0;
    start = start_date * 24 * 60;
    start += ((h-1)*60 + m);

    return start;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (DateTime(a, b, c) < DateTime(11, 11, 11)) {
        cout << -1;
    }
    else {
        cout << DateTime(a, b, c) - DateTime(11, 11, 11);
    }

    return 0;
}