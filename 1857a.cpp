#include<iostream>
 
int main() {
    int test_cases{};
    std::cin >> test_cases;
    
    while(test_cases--){
        int n{};
        std::cin >> n;
        
        int current{};
        
        int answer{0};
        
        while(n--){
            std::cin >> current;
            answer += (current % 2);
        }
        
        if(answer % 2) std::cout << "NO\n";
        else std::cout << "YES\n";
    }
    return 0;
}
