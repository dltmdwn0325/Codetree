#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 10

using namespace std;

int n;
string name[MAX_N], street_address[MAX_N], region[MAX_N];

class Info {
    public:
        string name;
        string address;
        string region;
    Info(string name, string address, string region) {
        this->name = name;
        this->address = address;
        this->region = region;
    }
    Info() {}
};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> street_address[i];
        cin >> region[i];
    }
    
    Info info[MAX_N];
    for (int i=0; i<n; i++) {
        info[i] = Info(name[i], street_address[i], region[i]);
    }
    sort(name, name+n);
    for (int i=0; i<n; i++) {
        if (name[n-1] == info[i].name) {
            cout << "name " << info[i].name << endl;
            cout << "addr " << info[i].address << endl;
            cout << "city " << info[i].region << endl;
            break;
        }
    }

    

    return 0;
}