#include<iostream>
#include<climits>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int a{}, b{};
        std::cin >> a >> b;

        int answer{INT_MAX};

        int start{};
        if(b < 2) start = 2 - b;

        for(int i=start; i<=40; i++){
            int copy_a{a};
            int temp{b+i};

            int counter{i};
            while(copy_a){
                copy_a /= temp;
                counter++;
            }

            answer = std::min(answer, counter);
        }

        std::cout << answer << '\n';
    }

    return 0;
}
