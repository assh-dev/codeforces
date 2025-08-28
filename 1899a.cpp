#include<iostream>
using namespace std;

int main() {
    int n{};
    cin >> n;

    int number;
    while(n--){
        cin >> number;
        if(number % 3 == 0){
            cout << "Second\n";
        }
        else{
            cout << "First\n";
        }
    }

    return 0;
}
