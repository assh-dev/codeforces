#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        int answer{0};
        int counter{0};

        int current{};
        while(n--){
            std::cin >> current;
            if(current == 1){
                if(counter > answer) answer = counter;
                counter = 0;
            }
            else{
                counter++;
            }
        }
        if(counter > answer) answer = counter;
        std::cout << answer << '\n';
    }
    return 0;
}
