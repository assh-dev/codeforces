#include<iostream>
#include<vector>

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::vector<int> nums(n);
        for(int& num: nums) std::cin >> num;

        bool answer{false};
        for(int i=0; !answer && i<n; i++){
            for(int j=i+1; !answer && j<n; j++){
                if(gcd(nums[i], nums[j]) <= 2) answer = true;
            }
        }
        if(answer) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    return 0;
}
