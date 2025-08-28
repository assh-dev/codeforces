#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::vector<std::pair<int, int>> nums(n);

        int current{};
        for(int i=0; i<n; i++){
            std::cin >> current;
            nums[i] = {current, i+1};
        }
        std::sort(nums.begin(), nums.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b){ return a.first > b.first; });

        long long answer{0};
        for(int i=0; i<n; i++) answer += 1LL * ((i / 2) + 1) * nums[i].first;
        std::cout << 2 * answer << '\n';

        int right_pointer{1};
        int left_pointer{-1};

        for(int i=0; i<n; i++){
            if(i % 2 == 0) nums[i].first = right_pointer++;
            else nums[i].first = left_pointer--;
        }

        std::sort(nums.begin(), nums.end(), [](const std::pair<int, int> &a, const std::pair<int, int> &b){ return a.second < b.second; });

        std::cout << 0 << ' ';
        for(int i=0; i<n; i++) std::cout << nums[i].first << ' ';
        std::cout << '\n';
    }

    return 0;
}
