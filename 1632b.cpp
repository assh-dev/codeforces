#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        for(int i=n-1; i>=0; i--) std::cout << i << ' ';
        std::cout << '\n';
    }

    return 0;
}
