#include<cstdio>
#include<climits>

int main() {
    int test_cases{};
    scanf("%d", &test_cases);

    while(test_cases--){
        int n{};
        scanf("%d", &n);

        int answer{INT_MAX};

        int current{};
        while(n--){
            scanf("%d", &current);
            answer &= current;
        }
        printf("%d\n", answer);
    }

    return 0;
}
