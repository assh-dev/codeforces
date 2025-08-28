#include<iostream>
#include<vector>
using namespace std;

int main() {
    int test_cases{};
    cin >> test_cases;

    for(int i=0; i<test_cases; i++){
        int cells{};
        cin >> cells;

        string state;
        cin >> state;

        int answer{0};
        int counter{0};
        bool flag_for_2{false};

        for(char c: state){
            if(c == '.'){
                counter++;
                answer++;
                if(counter >= 3){
                    flag_for_2 = true;
                    break;
                }
            }
            else{
                counter = 0;
            }
        }

        if(flag_for_2){
            cout << 2 << '\n';
        }
        else{
            cout << answer << '\n';
        }
    }
    return 0;
}
