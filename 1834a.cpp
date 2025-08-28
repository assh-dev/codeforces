#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        int minus{0}, plus{0};
        
        int current{};
        while(n--){
            std::cin >> current;
            if(current == 1) plus++;
            else minus++;
        }

        int sum = plus - minus;

        if(sum >= 0){
            if(minus % 2 == 0) std::cout << 0 << '\n';
            else std::cout << 1 << '\n';
        }
        else{
            int answer{0};
            if(minus % 2 == 1){
                minus--;
                plus++;
                answer++;
            }

            sum = plus - minus;
            if(sum < 0){
                int needed = ( (-1) * sum + 1) / 2;
                minus -= needed;
                plus += needed;
                answer += needed;
            }
            
            if(minus % 2 == 1) answer++;

            std::cout << answer << '\n';
        }
    }
    return 0;
}
