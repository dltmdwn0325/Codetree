#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 10

class Person {
    public:
        string name;
        int h, w;
    Person(string name, int h, int w) {
        this->name = name;
        this->h = h;
        this->w = w;
    }
    Person() {}
};

bool Cmp(const Person &a, const Person &b) {
    if (a.h != b.h) return a.h < b.h;
    return a.w > b.w;
}

int main() {
    int n;
    string name;
    int height;
    int weight;

    Person people[MAX_N];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> height >> weight;
        people[i] = Person(name, height, weight);
    }

    sort(people, people+n, Cmp);
    for (int i=0; i<n; i++) {
        cout << people[i].name << " " << people[i].h << " " << people[i].w << endl;
    }

    return 0;
}