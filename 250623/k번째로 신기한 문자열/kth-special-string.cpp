#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    // Please write your code here.
    int len_t = t.length();
    string real_str[100];
    int cnt = 0;
    for (int i=0; i<n; i++) {
        bool is_same = true;
        for (int j=0; j<len_t; j++) {
            if (str[i][j]!=t[j]) {
                is_same = false;
                break;
            } 
        }
        if (is_same) {
            real_str[cnt] = str[i];
            cnt++;
        } 
    }
    sort(real_str, real_str+cnt);
    cout << real_str[k-1];

    return 0;
}