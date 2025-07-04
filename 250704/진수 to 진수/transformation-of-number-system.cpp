#include <iostream>

using namespace std;

int Convert_Decimal(string n, int a) {
    int num = 0;
    for (int i=0; i<(int)n.size(); i++) {
        num = num*a + (n[i]-'0');
    }
    return num;
}

string Convert_B(int n, int b) {
    int binary[20] = {};
    int cnt = 0;
    string ans = "";
    while (true) {
        if (n<b) {
            binary[cnt++] = n;
            break;
        }
        binary[cnt++] = n%b;
        n /= b;
    }
    for (int i=cnt-1; i>=0; i--) {
        ans += (binary[i]+'0');
    }
    return ans;
}

int main() {
    int a, b;
    string n;
    cin >> a >> b;
    cin >> n;

    int first = Convert_Decimal(n, a);
    string result = Convert_B(first, b);

    cout << result;

    return 0;
}