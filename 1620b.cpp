#include<iostream>
#include<algorithm>

long long give_fl(){
    long long n{}, first{}, last{};
    std::cin >> n;
    std::cin >> first;
    for(int i=1; i<n; i++) std::cin >> last;
    return last - first;
}

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        long long w{}, h{};
        std::cin >> w >> h;
        long long temp1 = std::max(h * give_fl(), h * give_fl());
        long long temp2 = std::max(w * give_fl(), w * give_fl());
        long long answer = std::max(temp1, temp2);
        std::cout << answer << '\n';
    }

    return 0;
}
