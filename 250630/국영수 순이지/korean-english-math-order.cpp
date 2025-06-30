#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define MAX_N 10

class Grade {
    public:
        string name;
        int kor, eng, mat;
    
    Grade(string name, int kor, int eng, int mat) {
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->mat = mat;
    }
    Grade() {};
};

bool Cmp(const Grade &a, const Grade &b) {
    if (a.kor != b.kor) return a.kor > b.kor;
    if (a.eng != b.eng) return a.eng > b.eng;
    return a.mat > b.mat;
}

int main() {
    int n;
    string name;
    int korean;
    int english;
    int math;

    cin >> n;

    Grade grades[MAX_N];

    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> korean;
        cin >> english;
        cin >> math;
        grades[i] = Grade(name, korean, english, math);
    }

    sort(grades, grades+n, Cmp);

    for (int i=0; i<n; i++) {
        cout << grades[i].name << " ";
        cout << grades[i].kor << " ";
        cout << grades[i].eng << " ";
        cout << grades[i].mat << " ";
        cout << endl;
    }

    return 0;
}