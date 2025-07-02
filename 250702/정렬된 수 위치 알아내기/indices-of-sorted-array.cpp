#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 1000

class Sequence {
    public:
        int v, n;
    Sequence(int v, int n) {
        this->v = v;
        this->n = n;
    }
    Sequence() {}
};

bool Cmp(const Sequence &a, const Sequence &b) {
    if (a.v != b.v) return a.v < b.v;
    return a.n < b.n;
}

int main() {
    int N, value;
    int nums_to_rank[MAX_N+1];

    Sequence seq[MAX_N];

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> value;
        seq[i] = Sequence(value, i+1);
    }

    sort(seq, seq+N, Cmp);
    for (int i=0; i<N; i++) {
        nums_to_rank[seq[i].n] = i+1;
    }
    for (int i=1; i<=N; i++) {
        cout << nums_to_rank[i] << " ";
    }

    return 0;
}
