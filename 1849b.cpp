#include<iostream>
#include<vector>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, k{};
        std::cin >> n >> k;

        std::vector<std::pair<int, int>> index_vector(n);

        int current{};
        for(int i=0; i<n; i++){
            std::cin >> current;
            int final_health = current % k;
            if(final_health == 0) final_health = k;
            index_vector[i] = { final_health, i };
        }

        std::sort(index_vector.begin(), index_vector.end(),
                [](const std::pair<int, int> &a, const std::pair<int, int> &b){
                    if(a.first == b.first) return a.second < b.second;
                    return a.first > b.first;
                });

        for(int i=0; i<n; i++) std::cout << index_vector[i].second + 1 << ' ';
        std::cout << '\n';
    }

    return 0;
}
