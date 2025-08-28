#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        int _;
        for(int i=0; i<n; i++) std::cin >> _;

        if(n % 2 == 0){
            std::cout << 2 << '\n';
            std::cout << 1 << ' ' << n << '\n';
            std::cout << 1 << ' ' << n << '\n';
        }
        else{
            std::cout << 4 << '\n';
            std::cout << 1 << ' ' << n - 1 << '\n';
            std::cout << 1 << ' ' << n - 1 << '\n';
            std::cout << n - 1 << ' ' << n << '\n';
            std::cout << n - 1 << ' ' << n << '\n';
        }
    }
    return 0;
}
