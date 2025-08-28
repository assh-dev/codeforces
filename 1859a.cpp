#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    int test_cases{}; std::cin >> test_cases;

    while(test_cases--){
        int n{}; std::cin >> n;

        std::vector<int> nums(n);
        bool checker{true};
        std::cin >> nums[0];

        for(int i=1; i<n; i++){
            std::cin >> nums[i];
            if(nums[i] != nums[0]) checker = false;
        }

        sort(nums.begin(), nums.end());
        int upto_where{1};
        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1]){
                upto_where = i;
                break;
            }
        }

        if(checker) std::cout << -1;
        else{
            std::cout << upto_where << ' ' << n - upto_where << '\n';
            for(int i=0; i<upto_where; i++) std::cout << nums[0] << ' ';
            std::cout << '\n';
            for(int i=upto_where; i<n; i++) std::cout << nums[i] << ' ';
        }
        std::cout << std::endl;
    }
    return 0;
}
