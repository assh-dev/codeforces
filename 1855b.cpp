#include <iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long n;
        std::cin >> n;

        int counter{1};

        while(n % counter == 0) counter++;
        std::cout << counter - 1 << '\n';
    }
    return 0;
}
