#include<iostream>
#include<algorithm>
#include<climits>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int x{}, y{};
        std::cin >> x >> y;

        int minus_counter{0};
        int absolute_min{INT_MAX};
        int sum{0};

        int current{};
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                std::cin >> current;
                if(current < 0){
                    minus_counter++;
                    current *= -1;
                }
                absolute_min = std::min(absolute_min, current);
                sum += current;
            }
        }
        if(minus_counter % 2) std::cout << sum - (2 * absolute_min) << '\n';
        else std::cout << sum << '\n';
    }

    return 0;
}
