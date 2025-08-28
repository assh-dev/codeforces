#include<iostream>
#include<unordered_set>

using namespace std;

int main() {
    unordered_set<int> checker;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            char c{};
            cin >> c;

            if(i == 1 && j == 1){
                continue;
            }


            if(c == 'X'){
                int something{ (2-i) * 69 + (2-j) };

                if(checker.count(something)){
                    checker.erase(something);
                }
                else{
                    checker.insert(i * 69 + j);
                }
            }
        }
    }
    cout << (checker.empty() ? "YES" : "NO");
    return 0;
}
