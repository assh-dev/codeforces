#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;
        n--;

        int sum{0};
        int temp{};

        while(n--){
            std::cin >> temp;
            sum += temp;
        }

        std::cout << -1 * sum << '\n';
    }
    return 0;
}
