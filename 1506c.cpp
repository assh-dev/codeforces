#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        std::string a{}, b{};
        std::cin >> a >> b;

        int asize = a.size();
        int bsize = b.size();

        int answer{0};

        std::vector<std::vector<int>> dp(asize + 1, std::vector<int>(bsize + 1, 0));
        for(int i=1; i<=asize; i++){
            for(int j=1; j<=bsize; j++){
                if(a[i-1] == b[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                    answer = std::max(answer, dp[i][j]);
                }
            }
        }

        std::cout << asize + bsize - (2 * answer) << '\n';
    }

    return 0;
}
