#include<iostream>
#include<cmath>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int x1, y1, x2, y2;
    x1 = s[0] - 'a';
    y1 = s[1] - '1';
    x2 = t[0] - 'a';
    y2 = t[1] - '1';

    cout << max(abs(x1-x2), abs(y1-y2)) << "\n";

    while(x1 != x2 || y1 != y2) {
        int xDifference = x1 - x2;
        int yDifference = y1 - y2;

        if(x1 == x2){
            if(y1 > y2){
                cout << "D" << "\n";
                y1--;
            }
            else {
                cout << "U" << "\n";
                y1++;
            }
        }

        else if(y1 == y2){
            if(x1 > x2){
                cout << "L" << "\n";
                x1--;
            }
            else{
                cout << "R" << "\n";
                x1++;
            }
        }

        else if(xDifference > 0 && yDifference > 0){
            cout << "LD" << "\n";
            x1--;
            y1--;
        }
        
        else if(xDifference > 0 && yDifference < 0){
            cout << "LU" << "\n";
            x1--;
            y1++;
        }
        
        else if(xDifference < 0 && yDifference > 0){
            cout << "RD" << "\n";
            x1++;
            y1--;
        }

        else{
            cout << "RU" << "\n";
            x1++;
            y1++;
        }
    }
    return 0;
}
