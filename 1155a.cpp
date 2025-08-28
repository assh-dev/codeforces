#include<iostream>

int main() {
    int n{};
    std::cin >> n;

    std::string s{};
    s.reserve(n);
    std::cin >> s;

    bool flag{false};

    int i{0};
    for(i=0; i<n-1; i++){
        if(s[i] > s[i+1]){
            flag = true;
            break;
        }
    }

    if(flag) std::cout << "YES\n" << i+1 << " " << i+2 << '\n';
    else std::cout << "NO\n";
    return 0;
}
