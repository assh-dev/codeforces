#include<cstdio>

int main() {
    int test_cases{};
    scanf("%d", &test_cases);

    while(test_cases--){
        long long n{};
        scanf("%lld", &n);

        if(n <= 3 || n % 2 != 0) printf("-1\n");
        else printf("%lld %lld\n", (n+5)/6, n/4);
    }
    return 0;
}
