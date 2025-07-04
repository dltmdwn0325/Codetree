#include <iostream>

using namespace std;

int Convert_Decimal(string n) {
    int num = 0;
    for (int i=0; i<(int)n.size(); i++) {
        num = num * 2 + (n[i]-'0');
    }
    return num;
}

string Convert_Binary(int n) {
    int binary[20] = {};
    int cnt = 0;
    string ans = "";
    while (true) {
        if (n<2) {
            binary[cnt++] = n;
            break;
        }
        binary[cnt++] = n%2;
        n /= 2;
    }
    for (int i=cnt-1; i>=0; i--) {
        ans += (binary[i]+'0');
    }
    return ans;
}

int main() {
    string N;
    cin >> N;

    int n = 0;
    n = Convert_Decimal(N);
    n *= 17;

    cout << Convert_Binary(n);

    return 0;
}