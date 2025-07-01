#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 1000

class Student {
    public:
        int h, w, n;
    
    Student(int h, int w, int n) {
        this->h = h;
        this->w = w;
        this->n = n;
    }
    Student() {}
};

bool Cmp(const Student &a, const Student &b) {
    if (a.h != b.h) return a.h > b.h;
    if (a.w != b.w) return a.w > b.w;
    return a.n < b.n;
}

int main() {
    int N;
    int h;
    int w;

    cin >> N;

    Student students[MAX_N];

    for (int i = 0; i < N; i++) {
        cin >> h >> w;
        students[i] = Student(h, w, i+1);
    }

    sort(students, students+N, Cmp);

    for (int i=0; i<N; i++) {
        cout << students[i].h << " " << students[i].w << " " << students[i].n << endl;
    }

    return 0;
}
