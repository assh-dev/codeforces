#include<iostream>
using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;
    char previousRow;
    for(int i=0; i<rows; i++){
        string s;
        cin >> s;
        char first = s[0];

        if(i == 0){
            previousRow = first;
        }
        else{
            if(previousRow == first){
                cout << "NO\n";
                return 0;
            }
            previousRow = first;
        }

        for(int j=0; j<columns; j++){
            if(s[j] != first){
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}
