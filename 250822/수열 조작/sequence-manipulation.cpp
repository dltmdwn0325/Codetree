#include <iostream>
#include <deque>

using namespace std;

int N;

int main() {
    cin >> N;
    deque<int> d;

    for (int i=0; i<N; i++) {
        d.push_back(i+1);
    }

    while (d.size() != 1) {
        d.pop_front();
        int temp = d.front();
        d.pop_front();
        d.push_back(temp);
    }

    cout << d.front();
 
    return 0;
}
