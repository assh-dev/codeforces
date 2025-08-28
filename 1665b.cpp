#include<iostream>
#include<map>
#include<algorithm>
#include<cmath>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::map<int, int> frequency;

        int max_frequency{0};
        int current{};
        for(int i=0; i<n; i++){
            std::cin >> current;
            max_frequency = std::max(max_frequency, ++frequency[current]);
        }

        int steps{0};
        int clone = max_frequency;
        while(clone < n){
            clone += clone;
            steps++;
        }
        std::cout << steps + n - max_frequency << '\n';
    }
    return 0;
}
