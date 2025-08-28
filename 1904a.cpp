#include<iostream>
#include<unordered_set>
#include<utility>

struct pair_hash {
    std::size_t operator()(const std::pair<int, int>& p) const {
        return std::hash<int>{}(p.first) ^ (std::hash<int>{}(p.second) << 1);
    }
};

std::unordered_set<std::pair<int, int>, pair_hash> positions(int x, int y, int a, int b){
    return {
        {x+a, y+b}, {x+a, y-b}, {x-a, y+b}, {x-a, y-b},
        {x+b, y+a}, {x+b, y-a}, {x-b, y+a}, {x-b, y-a}
    };
}

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int a{}, b{};
        std::cin >> a >> b;

        int kx{}, ky{}, qx{}, qy{};
        std::cin >> kx >> ky >> qx >> qy;

        int counter{0};

        std::unordered_set<std::pair<int, int>, pair_hash> king = positions(kx, ky, a, b);
        std::unordered_set<std::pair<int, int>, pair_hash> queen = positions(qx, qy, a, b);

        for(std::pair<int, int> element: king){
            if(queen.count(element) > 0){
                counter++;
            }
        }
        
        std::cout << counter << '\n';
    }
    return 0;
}
