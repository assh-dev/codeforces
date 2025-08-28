#include<iostream>
#include<vector>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int n{};
        std::cin >> n;

        std::vector<int> something;

        int prev{};
        std::cin >> prev;

        int counter{1};

        bool flag{true};

        int current{};
        for(int i=1; i<n; i++){
            std::cin >> current;
            if(current == prev) counter++;
            else{
                if(counter == 1) flag = false;
                something.push_back(counter);
                prev = current;
                counter = 1;
            }
        }
        if(counter == 1) flag = false;
        else something.push_back(counter);

        if(!flag){
            std::cout << "-1\n";
            continue;
        }

        int start = 1;
        for(int i=0; i<something.size(); i++){
            for(int j=1; j<something[i]; j++){
                std::cout << start + j << ' ';
            }
            std::cout << start << ' ';
            start += something[i];
        }
        std::cout << '\n';
    }

    return 0;
}
