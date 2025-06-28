#include <iostream>

#define MAX_N 5

using namespace std;

class Agent {
    public:
        char codename;
        int score;
    Agent(char codename = ' ', int score = 0) {
        this->codename = codename;
        this->score = score;
    }
};

int main() {
    Agent agents[MAX_N];
    for (int i = 0; i < MAX_N; i++) {
        char codename;
        int score;
        cin >> codename >> score;
        agents[i] = Agent(codename, score);
    }

    char min_codename = ' ';
    int min_score = 100;
    for (int i=0; i<MAX_N; i++) {
        if (agents[i].score < min_score) {
            min_codename = agents[i].codename;
            min_score = agents[i].score;
        }
    } 

    cout << min_codename << " " << min_score;

    return 0;
}
