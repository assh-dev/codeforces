#include<iostream>

int find_xor(int a){
    int remainder = a % 4;
    if(remainder == 1) return 1;
    if(remainder == 2) return a + 1;
    if(remainder == 3) return 0;
    return a;
}

int main() {
    int test_cases{};
    std::cin >> test_cases;

    while(test_cases--){
        int a{}, b{};
        std::cin >> a >> b;

        int xor_all = find_xor(a - 1);

        if(xor_all != b){
            if((xor_all ^ b) == a) a += 2;
            else a++;
        }
        std::cout << a << '\n';
    }
}
