#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long n{};
        std::cin >> n;
        
        int answer{0};
        bool flag{true};

        while(n != 1){
            if(n % 2 == 1) n *= 2;
            else if(n % 2 == 0 && n % 6 != 0){
                flag = false;
                break;
            }
            else n /= 6;
            answer++;
        }

        if(flag) std::cout << answer << '\n';
        else std::cout << -1 << '\n';
    }
    return 0;
}
