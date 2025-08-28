#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long n{}, x{};
        std::cin >> n >> x;

        long long max_element{LLONG_MIN};
        std::vector<long long> nums(n);
        for(long long& num: nums){
            std::cin >> num;
            max_element = std::max(max_element, num);
        }

        long long start{0};
        long long end{max_element + x + 1};

        while(start < end){
            long long mid = (start + end) / 2;
            long long temp{0};
            for(long long& num: nums) temp += std::max(mid - num, 0LL);
            if(temp <= x) start = mid + 1;
            else end = mid;
        }

        std::cout << start - 1 << '\n';
    }

    return 0;
}
