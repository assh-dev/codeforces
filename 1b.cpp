#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int pointer = 0;
        while(isalpha(s[pointer])){
            pointer++;
        }

        int indexOfC = s.find('C');
        if(s[0] == 'R' && isdigit(s[1]) && indexOfC != string::npos){
            int indexOfC = s.find('C');
            int row = stoi(s.substr(1, indexOfC-1));
            int column = stoi(s.substr(indexOfC+1));

            string columnString = "";
            while(column > 0){
                column--;
                columnString += char('A' + column % 26);
                column /= 26;
            }
            reverse(columnString.begin(), columnString.end());
            cout << columnString << row << "\n";
        }
        else{
            int number = stoi(s.substr(pointer));
            int columnNumber = 0;
            for(int i = 0; i < pointer; i++) {
                columnNumber = columnNumber * 26 + (s[i] - 'A' + 1);
            }
            cout << "R" << number << "C" << columnNumber << "\n";
        }
    }
    return 0;
}
