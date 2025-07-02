#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 1000

class Cordinate {
    public:
        int x, y, number;
    Cordinate(int x, int y, int number) {
        this->x = x;
        this->y = y;
        this->number = number;
    }
    Cordinate() {}
};

bool Cmp(const Cordinate &a, const Cordinate &b) {
    if ((abs(a.x)+abs(a.y)) != (abs(b.x)+abs(b.y))) {
        return (abs(a.x)+abs(a.y)) < (abs(b.x)+abs(b.y));
    }
    return a.number < b.number;
}

int main() {
    int N;
    int x, y;

    cin >> N;

    Cordinate cor[MAX_N];

    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        cor[i] = Cordinate(x, y, i+1);
    }

    sort(cor, cor+N, Cmp);

    for (int i=0; i<N; i++) {
        cout << cor[i].number << endl;
    }

    return 0;
}
