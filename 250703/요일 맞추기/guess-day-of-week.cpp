#include <iostream>

using namespace std;

int Date(int m, int d) {
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int date = 0;
    for (int i=1; i<m; i++) {
        date += num_of_days[i];
    }
    date += d;
    return date;
}

string Day(int d1, int d2) {
    int days = 0;
    if (d1 < d2) {
        days = d2- d1;
        if (days % 7 == 0) return "Mon";
        else if (days % 7 == 1) return "Tue";
        else if (days % 7 == 2) return "Wed";
        else if (days % 7 == 3) return "Thu";
        else if (days % 7 == 4) return "Fri";
        else if (days % 7 == 5) return "Sat";
        else if (days % 7 == 6) return "Sun";
    }
    else {
        days = d1 - d2;
        if (days % 7 == 0) return "Mon";
        else if (days % 7 == 1) return "Sun";
        else if (days % 7 == 2) return "Sat";
        else if (days % 7 == 3) return "Fri";
        else if (days % 7 == 4) return "Thu";
        else if (days % 7 == 5) return "Wed";
        else if (days % 7 == 6) return "Tue";
    }
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int date1, date2;
    date1 = Date(m1, d1);
    date2 = Date(m2, d2);

    cout << Day(date1, date2);

    return 0;
}