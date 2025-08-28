#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        int answer{0};

        int prev{};
        std::cin >> prev;
        n--;

        while(n--){
            int current{};
            std::cin >> current;

            if(prev % 2 == current % 2) answer++;
            prev = current;
        }

        std::cout << answer << '\n';
    }
    return 0;
}
