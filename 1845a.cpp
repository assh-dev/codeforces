#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, k{}, x{};
        std::cin >> n >> k >> x;

        if(x == 1 && k == 1){
            std::cout << "NO\n";
            continue;
        }

        if(x != 1){
            std::cout << "YES\n";
            std::cout << n << '\n';
            for(int i=0; i<n; i++) std::cout << 1 << ' ';
            std::cout << '\n';
        }
        else if(k >= 2 && n % 2 == 0){
            std::cout << "YES\n";
            std::cout << n / 2 << '\n';
            for(int i=0; i<n/2; i++) std::cout << 2 << ' ';
            std::cout << '\n';
        }
        else if(k >= 3){
            std::cout << "YES\n";
            std::cout << 1 + (n - 3) / 2 << '\n';
            std::cout << 3 << ' ';
            for(int i=0; i<(n-3)/2; i++) std::cout << 2 << ' ';
            std::cout << '\n';
        }
        else std::cout << "NO\n";
    }
    return 0;
}
