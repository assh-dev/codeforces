#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long x{}, n{};
        std::cin >> x >> n;

        long long answer{};
        int steps = n % 4;
        if(steps == 1) answer = -n;
        else if(steps == 2) answer = 1;
        else if(steps == 3) answer = n + 1;

        if(x % 2) std::cout << x - answer << '\n';
        else std::cout << x + answer << '\n';
    }

    return 0;
}
