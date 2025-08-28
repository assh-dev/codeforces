#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int xa{}, ya{}, xb{}, yb{};
        std::cin >> xa >> ya >> xb >> yb;

        if(ya > yb || xb > xa + (yb - ya)) std::cout << -1 << '\n';
        else std::cout << (yb - ya) + (xa + (yb - ya) - xb) << '\n';
    }
    return 0;
}
