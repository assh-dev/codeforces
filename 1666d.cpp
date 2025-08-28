#include<iostream>
#include<unordered_map>
#include<vector>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        std::string s{};
        std::cin >> s;
        int ssize = s.size();

        std::string to_find{};
        std::cin >> to_find;
        int tsize = to_find.size();

        std::unordered_map<char, std::vector<int>> frequency;
        for(int i=0; i<ssize; i++) frequency[s[i]].emplace_back(i);

        int spointer = ssize - 1;
        int tpointer = tsize - 1;

        bool flag{true};

        while(spointer >= 0 && tpointer >= 0){
            if(s[spointer] == to_find[tpointer]){
                int current_size = frequency[s[spointer]].size();
                if(frequency[s[spointer]][current_size-1] != spointer){
                    flag = false;
                    break;
                }
                else{
                    frequency[s[spointer]].erase(frequency[s[spointer]].begin() + current_size - 1);
                    tpointer--;
                }
            }
            spointer--;
        }
        if(tpointer >= 0 || !flag) std::cout << "NO\n";
        else std::cout << "YES\n";
    }
    return 0;
}
