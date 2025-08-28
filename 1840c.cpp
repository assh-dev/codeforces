#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, k{}, q{};
        std::cin >> n >> k >> q;

        int counter{0};
        long long answer{0};

        int current{};
        while(n--){
            std::cin >> current;

            if(current <= q) counter++;
            else{
                if(counter >= k) answer += 1LL * (counter - k + 1) * (counter - k + 2) / 2;
                counter = 0;
            }
        }
        if(counter >= k) answer += 1LL * (counter - k + 1) * (counter - k + 2) / 2;
        std::cout << answer << '\n';
    }

    return 0;
}
