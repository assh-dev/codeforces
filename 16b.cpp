#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int maxCarry{};
    cin >> maxCarry;

    int containers{};
    cin >> containers;

    vector<pair<int, int>> mapping;

    for(int i=0; i<containers; i++){
        int a{}, b{};
        cin >> a >> b;
        mapping.emplace_back(b, a);
    }

    sort(mapping.begin(), mapping.end(), [](pair<int, int> &x, pair<int, int> &y){
        return x.first > y.first;
    });

    int answer{0};

    for(pair<int, int> &it: mapping){

        int power = it.first;
        int number = it.second;

        if(maxCarry >= number){
            answer += (power * number);
            maxCarry -= number;
        }
        else{
            answer += (power * maxCarry);
            break;
        }
    }

    cout << answer;

    return 0;
}
