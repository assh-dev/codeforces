#include<iostream>
#include<vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, q{};
        std::cin >> n >> q;

        int total_odds{0};

        std::vector<int> prefix(n+1, 0);

        int current{};
        for(int i=1; i<=n; i++){
            std::cin >> current;
            total_odds += current % 2;
            prefix[i] = current % 2 + prefix[i-1];
        }

        int l{}, r{}, k{};
        for(int i=0; i<q; i++){
            std::cin >> l >> r >> k;
            if((total_odds - (prefix[r] - prefix[l-1]) + ((k % 2) * (r - l + 1))) % 2) std::cout << "YES\n";
            else std::cout << "NO\n";
        }
    }
    return 0;
}
