#include<iostream>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long n{}, c{};
        std::cin >> n >> c;

        long long sum{0};

        long long current{};
        for(int i=0; i<n; i++){
            std::cin >> current;
            sum += current;
            c -= current * current;
        }
        c /= 4;

        long long start{1};
        long long end{1000000000};
        long long mid{};
        while(start < end){
            mid = (start + end) / 2;
            long long intermediate = mid * (sum + n * mid);
            if(c > intermediate) start = mid + 1;
            else end = mid;
        }

        std::cout << start << '\n';
    }

    return 0;
}
