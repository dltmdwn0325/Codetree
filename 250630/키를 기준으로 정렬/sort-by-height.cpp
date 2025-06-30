#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 10

class Person {
    public:
        string name;
        int height, weight;

    Person(string name, int height, int weight) {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
    Person() {};
};

bool cmp(const Person &a, const Person &b) {
    return a.height < b.height;
}

int main() {
    int n;
    string name;
    int height;
    int weight;

    cin >> n;

    Person people[MAX_N];

    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> height;
        cin >> weight;
        people[i] = Person(name, height, weight);
    }

    sort(people, people+n, cmp);

    for (int i=0; i<n; i++) {
        cout << people[i].name << " " << people[i].height << " " << people[i].weight << endl;
    }

    return 0;
}