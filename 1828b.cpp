#include<iostream>
#include<algorithm>

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a%b);
    return 0;
}

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        int answer{0};

        int current{};
        for(int i=1; i<=n; i++){
            std::cin >> current;
            int diff = abs(current - i);
            answer = gcd(answer, diff);
        }
        std::cout << answer << '\n';
    }

    return 0;
}
