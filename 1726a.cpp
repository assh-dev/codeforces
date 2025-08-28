#include<cstdio>
#include<algorithm>
#include<climits>

int main() {
    int test_cases{};
    scanf("%d", &test_cases);

    while(test_cases--){
        int n{};
        scanf("%d", &n);

        int answer{0};

        int nums[n];
        scanf("%d", &nums[0]);

        int max_element{}, min_element{};
        min_element = max_element = nums[0];

        for(int i=1; i<n; i++){
            scanf("%d", &nums[i]);
            min_element = std::min(min_element, nums[i]);
            max_element = std::max(max_element, nums[i]);
            answer = std::max(answer, nums[i-1] - nums[i]);
        }

        answer = std::max(answer, nums[n-1] - nums[0]);
        answer = std::max(answer, max_element - nums[0]);
        answer = std::max(answer, nums[n-1] - min_element);
        printf("%d\n", answer);
    }
    return 0;
}
