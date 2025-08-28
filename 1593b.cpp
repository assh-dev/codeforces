#include<iostream>
#include<string>
#include<climits>
#include<algorithm>

int some_function(std::string& s, int size, char first, char second, char third){
    int answer{0};
    int prev = size;
    int pointer = size - 1;

    while(pointer > 0 && s[pointer] != first) pointer--;
    if(pointer <= 0) return INT_MAX;

    answer += (prev - pointer - 1);
    prev = pointer;
    pointer--;

    while(pointer >= 0 && (s[pointer] != second && s[pointer] != third )) pointer--;
    if(pointer < 0) return INT_MAX;

    answer += (prev - pointer - 1);

    return answer;
}

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        std::string s;
        std::cin >> s;
        int size = s.size();

        std::cout << std::min(some_function(s, size, '0', '0', '5'), some_function(s, size, '5', '2', '7')) << '\n';
    }

    return 0;
}
