#include<iostream>
#include<string>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{}, k{};
        std::cin >> n >> k;

        std::string s{};
        std::cin >> s;

        int white{0};

        for(int i=0; i<k; i++) if(s[i] == 'W') white++;
        int answer{white};

        for(int i=k; i<n; i++){
            if(s[i] == 'W') white++;
            if(s[i-k] == 'W') white--;

            answer = std::min(answer, white);
        }

        std::cout << answer << '\n';
    }

    return 0;
}
