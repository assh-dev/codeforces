#include<cstdio>

int main() {
    int test_cases{};
    scanf("%d", &test_cases);

    while(test_cases--){
        int n{};
        scanf("%d", &n);

        bool flag{false};
        int islands{0};

        int current{};
        for(int i=0; i<n; i++){
            scanf("%d", &current);
            if(current == 0){
                if(flag){
                    islands++;
                    flag = false;
                }
            }
            else flag = true;
        }
        if(flag) islands++;

        if(islands == 0) printf("0\n");
        else if(islands == 1) printf("1\n");
        else printf("2\n");
    }
    return 0;
}
