#include<iostream>
#include<vector>
#include<climits>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        long long second_sum{0};
        int first_min_element{INT_MAX};
        int small_second{INT_MAX};

        for(int i=0; i<n; i++){
            int m{};
            std::cin >> m;

            int first{INT_MAX};
            int second{INT_MAX};

            int current{};
            while(m--){
                std::cin >> current;
                if(current < first){
                    int temp = first;
                    first = current;
                    second = temp;
                }
                else if(current < second){
                    second = current;
                }
            }

            second_sum += second;
            first_min_element = std::min(first_min_element, first);
            small_second = std::min(small_second, second);
        }

        long long answer = second_sum + first_min_element - small_second;
        std::cout << answer << '\n';
    }
}
