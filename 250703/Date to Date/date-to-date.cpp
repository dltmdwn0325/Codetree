#include <iostream>

using namespace std;



int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int end_date = 0, start_date = 0;
    for (int i=1; i<m2; i++) {
        end_date += num_of_days[i];
    }
    end_date += d2;
    for (int i=1; i<m1; i++) {
        start_date += num_of_days[i];
    }
    start_date += d1;

    cout << end_date - start_date + 1;

    return 0;
}