#include<iostream>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::string s{};
        std::cin >> s;

        int counter{1};
        int answer{0};

        for(int i=1; i<n; i++){
            if(s[i] == s[i-1]) counter++;
            else{
                answer = std::max(answer, counter);
                counter = 1;
            }
        }

        answer = std::max(answer, counter);
        std::cout << answer + 1 << '\n';
    }
    return 0;
}
