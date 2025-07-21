#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, K;
queue<int> q;
vector<int> v;

int main() {
    cin >> N >> K;

    for (int i=1; i<=N; i++) {
        q.push(i);
    }

    while(!q.empty()) {
        for (int i=0; i<K-1; i++) {
            int front = q.front();
            q.pop();
            q.push(front);
        }
        int erase_value = q.front();
        q.pop();
        v.push_back(erase_value);
    }

    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
