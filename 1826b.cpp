#include<iostream>
#include<vector>
#include<numeric>
#include<cstdlib>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::vector<int> nums(n);
        for(int& num: nums) std::cin >> num;

        int answer{0};
        for(int i=0; i<n/2; i++) answer = std::gcd(answer, std::abs(nums[i] - nums[n-1-i]));
        std::cout << answer << '\n';
    }

    return 0;
}
