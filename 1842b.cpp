#include<iostream>

void something(long long n, long long x, long long& answer){
    long long current{};
    bool flag{true};
    for(int i=0; i<n; i++){
        std::cin >> current;
        if(flag && (current | x) == x) answer |= current;
        else flag = false;
    }
}

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long n{}, x{};
        std::cin >> n >> x;

        long long answer{0};
        for(int i=0; i<3; i++) something(n, x, answer);

        if(answer == x) std::cout << "YES\n";
        else std::cout << "NO\n";
    }

    return 0;
}
