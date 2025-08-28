#include<iostream>
#include<unordered_map>
#include<cmath>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::unordered_map<int, int> frequency;

        while(n--){
            int num{};
            std::cin >> num;

            frequency[num]++;
        }

        if(frequency.size() > 2){
            std::cout << "NO\n";
            continue;
        }
        if(frequency.size() == 1){
            std::cout << "YES\n";
            continue;
        }

        auto it = frequency.begin();
        int a = it->second;
        it++;
        int b = it->second;

        if(std::abs(a - b) <= 1){
            std::cout << "YES\n";
        }
        else{
            std::cout << "NO\n";
        }
    }
    return 0;
}
