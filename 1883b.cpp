#include<iostream>
#include<vector>
#include<numeric>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, k{};
        std::cin >> n >> k;

        std::string input;
        std::cin >> input;

        std::vector<int> frequency(26, 0);
        for(char c: input) frequency[c - 'a'] = (frequency[c - 'a'] + 1) % 2;

        int sum = std::accumulate(frequency.begin(), frequency.end(), 0);

        if(sum - k <= 1) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    return 0;
}
