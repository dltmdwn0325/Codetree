#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
int meeting_time;

class Project {
    public:
        string s;
        char m;
        int t;
    Project(string secret_code, char meeting_point, int meeting_time) {
        this->s = secret_code;
        this->m = meeting_point;
        this->t = meeting_time;
    }      
};

int main() {
    cin >> secret_code >> meeting_point >> meeting_time;

    // Please write your code here.
    Project project1 = Project(secret_code, meeting_point, meeting_time);
    cout << "secret code : " << project1.s << endl;
    cout << "meeting point : " << project1.m << endl;
    cout << "time : " << project1.t << endl;

    return 0;
}