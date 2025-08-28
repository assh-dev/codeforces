#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, p{};
        std::cin >> n >> p;

        std::vector<int> a(n);
        for(int& num: a) std::cin >> num;

        std::vector<std::pair<int, int>> mapping(n);

        int min_b{INT_MAX};

        int current{};
        for(int i=0; i<n; i++){
            std::cin >> current;
            min_b = std::min(min_b, current);
            mapping[i] = {a[i], current};
        }

        if(min_b >= p){
            std::cout << 1LL * n * p << '\n';
            continue;
        }

        std::sort(mapping.begin(), mapping.end(), 
                [](const std::pair<int, int> &x, const std::pair<int, int> &y){
                    return x.second < y.second;
                });

        long long total_cost{p};
        int resident_told{1};
        int pointer{0};

        while(pointer < n && resident_told < n){
            if(mapping[pointer].second >= p) break;
            int can_share = std::min(mapping[pointer].first, n - resident_told);
            total_cost += 1LL * can_share * mapping[pointer].second;
            resident_told += can_share;
            pointer++;
        }

        total_cost += 1LL * (n - resident_told) * p;

        std::cout << total_cost << '\n';
    }

    return 0;
}
