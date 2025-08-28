#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long n{}, k{}, x{};
        std::cin >> n >> k >> x;

        long long front = k * (k + 1) / 2;
        long long back = k * (2 * n - k + 1) / 2;

        if(x <= back && x >= front) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    return 0;
}
