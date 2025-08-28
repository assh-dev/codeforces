#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long n{};
        std::cin >> n;
        
        if(n & (n-1)) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
}
