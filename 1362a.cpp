#include<iostream>

int greater_function(long long a, long long b){
    int counter{0};
    while(b > a){
        a <<= 1;
        counter++;
    }
    if(b == a) return counter;
    return -1;
}

int smaller_function(long long a, long long b){
    int counter{0};
    while(a > b && a % 2 == 0){
        a >>= 1;
        counter++;
    }
    if(b == a) return counter;
    return -1;
}

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long a{}, b{};
        std::cin >> a >> b;

        int temp{};

        if(a == b){
            std::cout << "0\n";
            continue;
        }
        else if(a < b) temp = greater_function(a, b);
        else temp = smaller_function(a, b);
        
        if(temp == -1){
            std::cout << "-1\n";
            continue;
        }

        int answer{0};
        answer += temp / 3;
        temp %= 3;
        answer += temp / 2;
        temp %= 2;
        answer += temp;

        std::cout << answer << '\n';
    }

    return 0;
}
