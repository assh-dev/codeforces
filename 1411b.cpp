#include<iostream>

bool if_fair(long long n){
    long long copy{n};
    while(copy > 0){
        int temp = copy % 10;
        if(temp != 0 && n % temp != 0) return false;
        copy /= 10;
    }
    return true;
}

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long n{};
        std::cin >> n;

        while(true){
            if(if_fair(n)){
                std::cout << n << '\n';
                break;
            }
            n++;
        }
    }

    return 0;
}
