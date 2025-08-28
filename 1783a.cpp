#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<utility>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::vector<int> nums(n, 0);
        for(int& i: nums) std::cin >> i;
        sort(nums.begin(), nums.end(), std::greater<int>());

        if(nums[0] == nums[n-1]){
            std::cout << "NO\n";
            continue;
        }
        else std::swap(nums[1], nums[n-1]);

        std::cout << "YES\n";
        for(int num: nums) std::cout << num << ' ';
        std::cout << '\n';
    }

    return 0;
}
