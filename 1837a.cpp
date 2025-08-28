#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int x{}, k{};
        std::cin >> x >> k;

        if(x % k != 0) std::cout << 1 << '\n' << x << '\n';
        else std::cout << 2 << '\n' << x - k + 1 << ' ' << k - 1 << '\n';
    }
    return 0;
}
