#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::string s;
        std::cin >> s;

        int start{0};
        int end = n - 1;

        while(s[start] != s[end] && start < end){
            start++;
            end--;
        }

        std::cout << end - start + 1 << '\n';
    }
    return 0;
}
