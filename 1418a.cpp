#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;
    
    while(test_cases--){
        long long x{}, y{}, k{};
        std::cin >> x >> y >> k;
        std::cout << k + (k * (y + 1) - 1 + x - 2) / (x - 1) << '\n';
    }

    return 0;
}
