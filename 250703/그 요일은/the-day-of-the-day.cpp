#include <iostream>

using namespace std;

int NumsofDay(int m, int d) {
    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;
    for (int i=1; i<m; i++) {
        total_days += num_of_days[i];
    }
    total_days += d;
    return total_days;
}

int main() {
    int m1, m2, d1, d2;
    string A;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int diff = 0;
    diff = NumsofDay(m2, d2) - NumsofDay(m1, d1);

    int cnt = 0;
    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    while (diff > 7) {
        diff -= 7;
        cnt++;
    }
    
    for (int i=0; i<=diff; i++) {
        if (days[i] == A) {
            cnt++;
            break;
        }
    }

    cout << cnt;

    return 0;
}