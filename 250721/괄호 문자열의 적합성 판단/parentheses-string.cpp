#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;
    stack<char> s;
    bool is_right = true;

    for (int i=0; i<str.size(); i++) {
        if (str[i] == '(') {
            s.push(str[i]);
        }
        else {
            if (s.empty() == true) {
                is_right = false;
                break;
            }
            s.pop();
        }
    }

    if (s.empty() == false) {
        is_right = false;
    }

    cout << (is_right ? "Yes" : "No");

    return 0;
}
