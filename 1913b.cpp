#include<iostream>
#include<string>
#include<vector>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        std::string s{};
        std::cin >> s;

        int size = s.size();

        std::vector<int> nums(2, 0);
        for(char c: s) nums[c - '0']++;

        if(nums[0] == nums[1]){
            std::cout << 0 << '\n';
            continue;
        }

        int pointer{0};
        while(pointer < size){
            if(s[pointer] == '0' && nums[1] > 0) nums[1]--;
            else if(s[pointer] == '1' && nums[0] > 0) nums[0]--;
            else break;
            pointer++;
        }

        std::cout << nums[0] + nums[1] << '\n';
    }

    return 0;
}
