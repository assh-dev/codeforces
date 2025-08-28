#include<iostream>
#include<vector>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::vector<int> nums(n);

        for(int i=0; i<n; i++){
            std::cin >> nums[i];
            if(nums[i] == 1) nums[i] = 2;
            if(i && nums[i] % nums[i-1] == 0) nums[i]++;
            std::cout << nums[i] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
