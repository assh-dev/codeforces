#include<iostream>
#include<cmath>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        if(n % 2 == 0) std::cout << n / 2 << ' ' << n / 2 << '\n';
        else{
            bool flag = false;
            for(int i=3; i*i <= n; i+=2){
                if(n % i == 0){
                    flag = true;
                    std::cout << n / i << ' ' << n - (n / i) << '\n';
                    break;
                }
            }
            if(!flag) std::cout << 1 << ' ' << n - 1 << '\n';
        }
    }

    return 0;
}
