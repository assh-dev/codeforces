#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    // I haven't considered the goal difference and goal points
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<string, int> points;
    int numberOfTeams;
    cin >> numberOfTeams;

    for(int i=0; i<numberOfTeams; i++){
        string s;
        cin >> s;
        points[s] = 0;
    }

    cin.ignore();
    string line;
    while(getline(cin, line)){
        size_t dash = line.find('-');
        size_t space = line.find(' ');
        size_t colon = line.find(':');

        string team1 = line.substr(0, dash);
        string team2 = line.substr(dash+1, space-dash-1);
        int score1 = stoi(line.substr(space+1, colon-space-1));
        int score2 = stoi(line.substr(colon+1));

        if(score1 == score2){
            points[team1]++;
            points[team2]++;
        }
        else if(score1 > score2){
            points[team1] += 3;
        }
        else{
            points[team2] += 3;
        }
    }

    vector<pair<int, string>> teams;
    for(auto &p: points){
        teams.emplace_back(p.second, p.first);
    }
    sort(teams.rbegin(), teams.rend());

    vector<string> qualified;
    for(int i=0; i<numberOfTeams/2; i++){
        qualified.emplace_back(teams[i].second);
    }
    sort(qualified.begin(), qualified.end());

    for(const string &name: qualified){
        cout << name << "\n";
    }
    return 0;
}

