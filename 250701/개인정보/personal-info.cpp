#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 5

class Person {
    public:
        string name;
        int h;
        double w;
    Person(string name, int h, double w) {
        this->name = name;
        this->h = h;
        this->w = w;
    }
    Person() {}
};

bool Cmp_n(const Person &a, const Person &b) {
    return a.name < b.name;
}

bool Cmp_h(const Person &a, const Person &b) {
    return a.h > b.h;
}

int main() {
    string name;
    int height;
    double weight;

    Person people[MAX_N];

    for (int i = 0; i < 5; i++) {
        cin >> name >> height >> weight;
        people[i] = Person(name, height, weight);
    }

    sort(people, people+5, Cmp_n);
    cout << "name" << endl;
    for (int i=0; i<5; i++) {
        cout << people[i].name << " " << people[i].h << " " << people[i].w << endl;
    }
    cout << endl;

    sort(people, people+5, Cmp_h);
    cout << "height" << endl;
    for (int i=0; i<5; i++) {
        cout << people[i].name << " " << people[i].h << " " << people[i].w << endl;
    }

    return 0;
}