#include<iostream>
#include<string>
#include<vector>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::string s{};
        std::cin >> s;

        std::vector<int> frequency(26, 0);

        int answer{0};
        int unique{0};

        for(char c: s){
            if(frequency[c - 'a'] == 0){
                frequency[c - 'a'] = 1;
                unique++;
            }
            answer += unique;
        }

        std::cout << answer << '\n';
    }

    return 0;
}
