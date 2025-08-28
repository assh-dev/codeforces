#include<iostream>
#include<vector>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::vector<int> nums(n);
        for(int& num: nums) std::cin >> num;

        bool flag{false};
        int i{0};
        for(i=0; i<n-2; i++){
            if(nums[i] < nums[i+1] && nums[i+1] > nums[i+2]){
                flag = true;
                break;
            }
        }

        if(flag) std::cout << "YES\n" << i + 1 << ' ' << i + 2 << ' ' << i + 3 << '\n';
        else std::cout << "NO\n";
    }

    return 0;
}
