#include<iostream>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        std::string s{};
        std::cin >> s;

        bool flag{true};
        int first{};
        int longest{0};
        int counter{0};

        for(char c: s){
            if(c == '1') counter++;
            else if(flag){
                first = counter;
                flag = false;
                longest = std::max(longest, counter);
                counter = 0;
            }
            else{
                longest = std::max(longest, counter);
                counter = 0;
            }
        }
        longest = std::max(longest, counter + first);

        int rows = (longest + 1) / 2;
        int columns = (longest + 1) - ((longest + 1) / 2);
        std::cout << std::max(rows * columns, longest) << '\n';
    }
    return 0;
}
