#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;
        
        int current{};
        for(int i=0; i<n; i++){
            std::cin >> current;
            std::cout << n + 1 - current << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
