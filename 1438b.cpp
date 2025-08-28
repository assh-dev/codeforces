#include<iostream>
#include<unordered_set>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        bool flag{false};

        std::unordered_set<int> checker;
        int current{};
        while(n--){
            std::cin >> current;
            if(checker.find(current) != checker.end()) flag = true;
            else checker.insert(current);
        }

        if(flag) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    return 0;
}
