#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        int length{}, most_significant{0}, temp = n;
        while(temp > 0){
            most_significant = temp % 10;
            temp /= 10;
            length++;
        }
        
        std::cout << (length - 1) * 9 + most_significant << '\n';
    }

    return 0;
}
