#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long n{}, k{};
        std::cin >> n >> k;

        if(n % 2 == k % 2 || n % 2 == 0) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    return 0;
}
