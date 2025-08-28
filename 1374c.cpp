#include<iostream>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::string s{};
        s.reserve(n);
        std::cin >> s;

        int answer{0};

        int sum{0};
        for(char c: s){
            if(c == ')') sum++;
            else sum--;
            answer = std::max(answer, sum);
        }

        std::cout << answer << '\n';
    }
    return 0;
}
