#include<iostream>
#include<cmath>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long a{}, b{};
        std::cin >> a >> b;
        if(a == b){
            std::cout << "0 0\n";
            continue;
        }

        long long diff = std::abs(a - b);
        long long min_ab = std::min(a, b);
        long long mod_value = min_ab % diff;

        std::cout << diff << ' ' << std::min(mod_value, diff - mod_value) << '\n';
    }

    return 0;
}
