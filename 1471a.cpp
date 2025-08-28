#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, x{};
        std::cin >> n >> x;

        long long max_ops{0};
        long long sum{0};

        int current{};
        while(n--){
            std::cin >> current;
            sum += current;
            max_ops += current / x;
            if(current % x != 0) max_ops++;
        }

        long long temp = sum / x;
        if(sum % x != 0) temp++;

        std::cout << temp << ' ' << max_ops << '\n';
    }

    return 0;
}
