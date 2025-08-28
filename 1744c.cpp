#include<iostream>
#include<algorithm>
#include<string>
#include<climits>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        char at{};
        std::cin >> at;

        std::string s{};
        std::cin >> s;

        bool flag{false};
        int answer{0};
        int counter{0};
        int front_counter{0};

        for(char c: s){
            if(!flag) front_counter++;
            if(c == 'g'){
                if(!flag) flag = true;
                counter = 0;
                answer = std::max(answer, counter);
            }
            else if(c == at && counter == 0) counter++;
            else if(counter != 0) counter++;
        }

        answer = std::max(answer, front_counter + counter - 1);
        std::cout << answer << '\n';
    }
    return 0;
}
