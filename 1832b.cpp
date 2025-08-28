#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long n{}, k{};
        std::cin >> n >> k;

        std::vector<long long> nums(n+1, 0);
        for(int i=1; i<n+1; i++) std::cin >> nums[i];
        std::sort(nums.begin(), nums.end());
        for(int i=1; i<n+1; i++) nums[i] += nums[i-1];

        long long answer{0};
        for(int i=0; i<=k; i++) answer = std::max(answer, nums[n - i] - nums[2 * (k - i)]);
        std::cout << answer << '\n';
    }

    return 0;
}
