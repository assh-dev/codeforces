#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, k{};
        std::cin >> n >> k;

        bool flag{false};
        int temp{};
        while(n--){
            std::cin >> temp;
            if(temp == k){
                flag = true;
            }
        }
        if(flag){
            std::cout << "YES\n";
        }
        else{
            std::cout << "NO\n";
        }
    }
    return 0;
}
