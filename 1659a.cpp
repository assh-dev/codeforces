#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, r{}, b{};
        std::cin >> n >> r >> b;
        std::string answer;

        int gap = r / (b+1);
        int remainder = r % (b+1);

        for(int i=0; i<=b; i++){
            answer += std::string(gap + (remainder > 0), 'R');
            if(remainder) remainder--;
            if(i < b) answer += 'B';
        }
        std::cout << answer << '\n';
    }
    return 0;
}
