#include<iostream>
#include<cmath>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        int num_zeros{0};
        int num_ones{0};
        
        int current{};
        while(n--){
            std::cin >> current;
            if(current == 0) num_zeros++;
            else if(current == 1) num_ones++;
        }

        std::cout << (1ll << num_zeros) * num_ones << '\n';
    }

    return 0;
}
