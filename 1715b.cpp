#include<iostream>
#include<algorithm>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long n{}, k{}, b{}, s{};
        std::cin >> n >> k >> b >> s;

        if(s > (k*b + n*(k-1)) || s < k*b){
            std::cout << "-1\n";
            continue;
        }

        long long left_with = s - k*b;
        for(int i=0; i<n-1; i++){
            long long reduced = std::min(k-1, left_with);
            left_with -= reduced;
            std::cout << reduced << ' ';
        }
        std::cout << k * b + left_with << '\n';
    }

    return 0;
}
