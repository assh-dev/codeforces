#include<iostream>
#include<algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, x{};
        std::cin >> n >> x;

        int current{};
        std::cin >> current;
        n--;

        int answer{0};
        int min_element{current};
        int max_element{current};

        while(n--){
            std::cin >> current;
            min_element = std::min(min_element, current);
            max_element = std::max(max_element, current);

            if(max_element - min_element > 2 * x){
                answer++;
                min_element = current;
                max_element = current;
            }
        }

        std::cout << answer << '\n';
    }

    return 0;
}
