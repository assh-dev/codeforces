#include<iostream>

using namespace std;

int main() {
    int n{};
    cin >> n;

    for(int i=0; i<n; i++){
        int numberOfChars{};
        cin >> numberOfChars;

        int numberOf0{};
        int numberOf1{};

        for(int j=0; j<numberOfChars; j++){
            char temp{};
            cin >> temp;

            if(temp == '0'){
                numberOf0++;
            }
            else{
                numberOf1++;
            }
        }
        
        cout << (numberOf0 * (numberOf1 + 1)) + (numberOf1 * (numberOf1 - 1)) << '\n';
    }
    return 0;
}
