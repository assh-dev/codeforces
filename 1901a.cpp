#include<iostream>
#include<vector>
using namespace std;

int main() {
    int test_cases{};
    cin >> test_cases;

    for(int i=0; i<test_cases; i++){
        int answer{0};
        int prev{0};
        int current{};
        int n{};
        int x{};
        cin >> n >> x;

        for(int j=0; j<n; j++){
            cin >> current;
            answer = max(answer, abs(prev - current));
            prev = current;
        }

        answer = max(answer, 2 * (x - prev));
        cout << answer << '\n';
    }
    return 0;
}
