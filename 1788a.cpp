#include<iostream>
#include<vector>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::vector<int> nums(n, 0);
        int nums_insert{0};
        int temp{};

        for(int& x: nums){
            std::cin >> temp;
            if(temp == 2) nums_insert++;
            x = nums_insert;
        }

        if(nums_insert % 2 == 1) std::cout << -1 << '\n';
        else{
            int to_find = nums_insert / 2;
            for(int i=0; i<n; i++){
                if(nums[i] == to_find){
                    std::cout << i + 1 << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}
