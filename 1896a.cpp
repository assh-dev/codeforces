#include<iostream>
using namespace std;

int main() {
    int test_cases{};
    cin >> test_cases;

    int n{};
    int number{};
    int _;
    while(test_cases--){
        cin >> n >> number;
        for(int i=0; i<n-1; i++){
            cin >> _;
        }
        cout << (number == 1 ? "YES\n" : "NO\n");
    }
    return 0;
}
