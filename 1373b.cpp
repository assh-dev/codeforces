#include<iostream>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        std::string s{};
        std::cin >> s;

        int zeros{0}, ones{0};
        for(char c: s) (c == '0') ? zeros++: ones++;

        std::cout << ((std::min(zeros, ones) % 2 == 1) ? "DA\n" : "NET\n");
    }
    return 0;
}
