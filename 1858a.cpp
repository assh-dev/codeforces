#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int a{}, b{}, c{};
        std::cin >> a >> b >> c;

        if(c % 2 == 1) b--;

        if(a > b) std::cout << "First\n";
        else std::cout << "Second\n";
    }
    return 0;
}
