#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    constexpr int checker[11] = {0, 1, 2, 3, 4, 5, 5, 4, 3, 2, 1};

    while(test_cases--){
        int answer{0};
        char temp{};
        for(int i=1; i<=10; i++){
            for(int j=1; j<=10; j++){
                std::cin >> temp;
                if(temp == 'X'){
                    answer += std::min(checker[i], checker[j]);
                }
            }
        }
        std::cout << answer << '\n';
    }
    return 0;
}
