#include<cstdio>
#include<vector>

int main() {
    int test_cases{};
    scanf("%d", &test_cases);

    while(test_cases--){
        int n{};
        scanf("%d", &n);
        
        std::vector<int> nums(n);
        for(int i=0; i<n; i++) scanf("%d", &nums[i]);

        int answer{0};
        bool flag{true};

        for(int i=n-2; i>=0; i--){
            if(nums[i] >= nums[i+1]){
                if(nums[i+1] == 0){
                    flag = false;
                    break;
                }
                while(nums[i] >= nums[i+1]){
                    nums[i] /= 2;
                    answer++;
                }
            }
        }
        if(flag) printf("%d\n", answer);
        else printf("-1\n");
    }
    return 0;
}
