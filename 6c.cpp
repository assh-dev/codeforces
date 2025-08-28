#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n{};
    cin >> n;

    if(n == 1){
        cout << "1 0\n";
        return 0;
    }

    vector<int> chocolates(n);
    cin >> chocolates[0];

    for(int i=1; i<n; i++){
        cin >> chocolates[i];
        chocolates[i] += chocolates[i-1];
    }

    int maxChocolates = chocolates[n- 1];
    int pointer{0};

    while(pointer < n && chocolates[pointer] < maxChocolates - chocolates[pointer]){
        pointer++;
    }

    cout << pointer << " " << n - pointer << '\n';

    return 0;
}
