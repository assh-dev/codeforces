#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int a{}, b{}, c{};
        std::cin >> a >> b >> c;

        bool answer{false};
        if( (2*b - c) > 0 && (2*b - c) % a == 0 ) answer = true;
        else if( (a + c) % 2 == 0 && (a + c) / 2 > 0 && ((a + c) / 2) % b == 0 ) answer = true;
        else if( (2*b - a) > 0 && (2*b - a) % c == 0 ) answer = true;

        if(answer) std::cout << "YES\n";
        else std::cout << "NO\n";
    }

    return 0;
}
