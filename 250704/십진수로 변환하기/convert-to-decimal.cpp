#include <iostream>

using namespace std;

int main() {
    char binary[9]; //
    
    cin >> binary;

    int i = 0, num = 0;

    while (binary[i] != '\0') {
        num = num * 2 + (binary[i]-'0');
        i++;
    }

    cout << num;

    return 0;
}