#include<iostream>
#include<algorithm>
#include<climits>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, k{};
        std::cin >> n >> k;

        int answer{INT_MAX};
        int current{};

        if(k == 4){
            int even_counter{0};

            for(int i = 0; i < n; i++){
                std::cin >> current;
                even_counter += (current % 2 == 0);
                answer = std::min(answer, (k - (current % k)) % k );
            }

            int second_answer{0};
            if(even_counter < 2) second_answer = 2 - even_counter;

            answer = std::min(answer, second_answer);
        }

        else{
            for(int i = 0; i < n; i++){
                std::cin >> current;
                answer = std::min(answer, (k - (current % k)) % k );
            }
        }

        std::cout << answer << '\n';
    }

    return 0;
}
