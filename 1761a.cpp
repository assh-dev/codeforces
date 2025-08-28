#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, a{}, b{};
        std::cin >> n >> a >> b;

        if((a == n && b == n) || a + b + 1 < n) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    return 0;
}
