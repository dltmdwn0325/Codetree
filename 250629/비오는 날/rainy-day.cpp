#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Forecast {
    public:
        string date, day, weather;
    Forecast(string date, string day, string weather) {
        this->date = date;
        this->day = day;
        this->weather = weather;
    }
    Forecast() {}
};

int main() {
    int n;
    string date, day, weather;

    cin >> n;
    Forecast fc[100];

    for (int i = 0; i < n; i++) {
        cin >> date >> day >> weather;
        fc[i] = Forecast(date, day, weather);
    }

    sort(fc, fc+n, [](const Forecast &a, const Forecast &b) {
        return a.date < b.date;
    });

    int rain_idx;
    for (int i=0; i<n; i++) {
        if (fc[i].weather == "Rain") {
            rain_idx = i;
            break;
        }
    }

    cout << fc[rain_idx].date << " ";
    cout << fc[rain_idx].day << " ";
    cout << fc[rain_idx].weather << endl;
 
    return 0;
}