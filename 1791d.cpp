#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::string s{};
        std::cin >> s;

        std::vector<int> left(26);
        std::vector<int> right(26);
        for(char c: s) right[c - 'a']++;

        int left_counter = 0;
        int right_counter = 0;
        for(int num: right) right_counter += (num != 0);

        int answer{right_counter};
        for(char c: s){
            if(right[c - 'a'] == 1) right_counter--;
            if(left[c - 'a'] == 0) left_counter++;
            left[c - 'a']++;
            right[c - 'a']--;
            if(left_counter + right_counter > answer) answer = left_counter + right_counter;
        }

        std::cout << answer << '\n';
    }

    return 0;
}
