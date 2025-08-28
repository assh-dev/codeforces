#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    constexpr const char* probability[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout << probability[max(a,b)];
    return 0;
}
