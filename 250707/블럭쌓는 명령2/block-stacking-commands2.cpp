#include <iostream>

using namespace std;

int main() {
    int N, K, A, B;
    int block[100] = {};
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A >> B;
        for (int j=A-1; j<B; j++) {
            block[j] += 1;
        }
    }

    int max=0;
    for (int i=0; i<N; i++) {
        if (block[i]>max) {
            max = block[i];
        }
    }

    cout << max;

    return 0;
}