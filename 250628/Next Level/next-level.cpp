#include <iostream>
#include <string>

using namespace std;

class User_info {
    public:
        string id;
        int level;
    User_info(string id, int level) {
        this->id = id;
        this->level = level;
    }
};

int main() {
    string user2_id;
    int user2_level;

    cin >> user2_id >> user2_level;

    // Please write your code here.
    User_info user1 = User_info("codetree", 10);
    User_info user2 = User_info(user2_id, user2_level);

    cout << "user " << user1.id << " lv " << user1.level << endl;
    cout << "user " << user2.id << " lv " << user2.level;

    return 0;
}