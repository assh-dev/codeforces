#include<iostream>
#include<vector>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, k{};
        std::cin >> n >> k;

        std::vector<int> nums(n * k);
        for(int& num: nums) std::cin >> num;
        
        int after_every = n / 2 + 1;

        long long answer{0};
        int pointer{n * k - after_every};
        while(k--){
            answer += nums[pointer];
            pointer -= after_every;
        }

        std::cout << answer << '\n';
    }
    
    return 0;
}
