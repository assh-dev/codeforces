#include<iostream>
#include<string>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n_size{}, m_size{};
        std::cin >> n_size >> m_size;

        std::string n{}, m{};
        std::cin >> n >> m;

        int answer{-1};
        for(int i=0; i<=6; i++){
            if(n.find(m) != std::string::npos){
                answer = i;
                break;
            }
            n += n;
        }
        std::cout << answer << '\n';
    }
    return 0;
}
