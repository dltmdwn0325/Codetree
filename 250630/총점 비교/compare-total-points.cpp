#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define MAX_N 10

class Student {
    public:
        string name;
        int s1, s2, s3;

    Student(string name, int s1, int s2, int s3) {
        this->name = name;
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
    }
    Student() {}
};

bool Cmp(const Student &a, const Student &b) {
    return (a.s1 + a.s2 + a.s3) < (b.s1 + b.s2 + b.s3);
}

int main() {
    int n;
    string name;
    int score1;
    int score2;
    int score3;

    cin >> n;

    Student students[MAX_N];

    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> score1;
        cin >> score2;
        cin >> score3;
        students[i] = Student(name, score1, score2, score3);
    }

    sort(students, students+n, Cmp);

    for (int i=0; i<n; i++) {
        cout << students[i].name << " ";
        cout << students[i].s1 << " ";
        cout << students[i].s2 << " ";
        cout << students[i].s3 << endl;
    }

    return 0;
}