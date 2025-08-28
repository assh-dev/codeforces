#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

constexpr long long MOD = 1000000007;

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::vector<int> a(n+1, 0), b(n, 0);
        for(int i = 0; i < n; i++) std::cin >> a[i];
        for(int i = 0; i < n; i++) std::cin >> b[i];
        std::sort(a.begin(), a.end() - 1, std::greater<int>());
        std::sort(b.begin(), b.end(), std::greater<int>());

        long long answer{1};
        int pointer{0};

        for(int i = 0; i < n; i++){
            while(pointer < n && a[pointer] > b[i]) pointer++;
            answer = (answer * (pointer - i)) % MOD;
            if(answer <= 0) break;
        }

        std::cout << std::max(answer, 0LL) << '\n';
    }

    return 0;
}
