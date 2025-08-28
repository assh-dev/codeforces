#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        int xor_all{0};
        int temp{};
        for(int i=0; i<n; i++){
            std::cin >> temp;
            xor_all ^= temp;
        }

        if(xor_all == 0) std::cout << 0 << '\n';
        else if(n % 2 == 1) std::cout << xor_all << '\n';
        else std::cout << -1 << '\n';
    }
    return 0;
}
