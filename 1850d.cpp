#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, k{};
        std::cin >> n >> k;

        std::vector<int> nums(n);
        for(int& num: nums) std::cin >> num;

        if(n == 1){
            std::cout << 0 << '\n';
            continue;
        }

        sort(nums.begin(), nums.end());

        int answer{0};
        int counter{1};
        for(int i=1; i<n; i++){
            if(nums[i] - nums[i-1] <= k){
                counter++;
            }
            else{
                answer = std::max(answer, counter);
                counter = 1;
            }
        }
        answer = std::max(answer, counter);
        std::cout << n - answer << '\n';
    }
}
