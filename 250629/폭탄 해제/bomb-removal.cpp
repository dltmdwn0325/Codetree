#include <iostream>
#include <string>

using namespace std;

string unlock_code;
char wire_color;
int seconds;

class Bumb {
    public:
        string code;
        char color;
        int sec;
    Bumb(string code, char color, int sec) {
        this->code = code;
        this->color = color;
        this->sec = sec;
    }
    Bumb() {}
};

int main() {
    cin >> unlock_code >> wire_color >> seconds;

    // Please write your code here.
    Bumb b1 = Bumb(unlock_code, wire_color, seconds);
    cout << "code : " << b1.code << endl;
    cout << "color : " << b1.color << endl;
    cout << "second : " << b1.sec << endl;

    return 0;
}