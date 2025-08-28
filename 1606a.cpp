#include<iostream>
#include<string>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        std::string s;
        std::cin >> s;
        int size = s.size();

        if(s[0] != s[size-1]) s[0] = s[size-1];
        std::cout << s << '\n';
    }

    return 0;
}
