#include<iostream>
#include<string>
using namespace std;
// This code doesnt work

int main() {
    int t;
    int num;
    string s;
    bool flag;
    cin >> t;
    while(t--){
        flag = true;
        cin >> s;
        num = stoi(s);
        for(int i=1; i<100; i++){
            if(i*i == num){
                cout << 0 << " " << i << "\n";
                flag = false;
                break;
            }
        }
        if(flag){
            cout << -1 << "\n";
        }
    }
    return 0;
}
