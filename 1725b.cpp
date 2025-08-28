#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    int n{}, d{};
    std::cin >> n >> d;

    std::vector<int> nums(n);
    for(int& num: nums) std::cin >> num;
    std::sort(nums.begin(), nums.end());

    int start{0};
    int end{n-1};
    int answer{0};

    while(true){
        int temp = d / nums[end] + 1;
        start += temp - 1;
        if(start > end) break;
        answer++;
        end--;
    }
    
    std::cout << answer << '\n';
}
