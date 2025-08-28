#include<iostream>

int main() {
    int n{};
    std::cin >> n;

    int answer{INT_MAX};

    int temp{};

    while(n--){
        std::cin >> temp;
        answer = std::min(answer, abs(temp));
    }
    std::cout << answer << '\n';

    return 0;
}
