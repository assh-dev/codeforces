#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int a{}, b{}, n{};
        std::cin >> a >> b >> n;

        long long answer{0};

        int current{};
        while(n--){
            std::cin >> current;
            answer += (current < a) ? current : a - 1;
        }

        std::cout << answer + b << '\n';
    }
    return 0;
}
