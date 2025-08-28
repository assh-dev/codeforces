#include<iostream>
#include<vector>
#include<algorithm>

void frequency_calculator(std::vector<int>& frequency, int n){
    int element{};
    std::cin >> element;
    n--;

    int counter{1};
    int current{};

    while(n--){
        std::cin >> current;
        if(current == element) counter++;
        else{
            frequency[element] = std::max(frequency[element], counter);
            element = current;
            counter = 1;
        }
    }
    frequency[element] = std::max(frequency[element], counter);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;
        
        std::vector<int> frequency_a(2*n+1, 0), frequency_b(2*n+1, 0);
        frequency_calculator(frequency_a, n);
        frequency_calculator(frequency_b, n);

        int answer{0};
        for(int i=1; i<2*n+1; i++) answer = std::max(answer, frequency_a[i] + frequency_b[i]);

        std::cout << answer << '\n';
    }

    return 0;
}
