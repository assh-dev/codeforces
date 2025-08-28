#include<iostream>
#include<functional>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::vector<int> nums(n);
        for(int& num: nums) std::cin >> num;
        std::sort(nums.begin(), nums.end(), std::greater<int>());

        for(int& num: nums) std::cout << num << ' ';
        std::cout << '\n';
    }

    return 0;
}
