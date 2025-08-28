#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        int prev{};
        std::cin >> prev;
        std::cout << prev << ' ';

        for(int i=1; i<n; i++){
            int temp{};
            std::cin >> temp;

            if(temp > prev){
                std::cout << temp << ' ';
            }
            else{
                std::cout << std::min(temp, prev) - 1 << ' ' << temp << ' ';
            }

            prev = temp;
        }
        
        std::cout << std::endl;
    }
    return 0;
}
