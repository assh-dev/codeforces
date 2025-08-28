#include<iostream>
#include<algorithm>
#include<vector>

int main() {
    int test_cases{};
    std::cin >> test_cases;
    
    while(test_cases--){
        int n{};
        std::cin >> n;

        int first{};
        std::cin >> first;

        int sum{first};
        int answer{first};

        bool next_even = true;
        if(first % 2 == 0) next_even = false;

        int current{};
        for(int i=1; i<n; i++){
            std::cin >> current;

            if(std::abs(current) % 2 != next_even){
                sum = std::max(current, current + sum);
                next_even = !next_even;
            }
            else{
                sum = current;
            }
            answer = std::max(answer, sum);
        }

        std::cout << answer << '\n';
    }

    return 0;
}
