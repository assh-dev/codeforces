#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int main() {
    int rows{}, columns{};
    char president{};
    cin >> rows >> columns >> president;
    
    char matrix[rows][columns];

    pair<int, int> startPresident = {INT_MAX,INT_MAX};
    pair<int, int> endPresident = {0,0};

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == president){
                startPresident.first = min(startPresident.first, i);
                startPresident.second = min(startPresident.second, j);

                endPresident.first = max(endPresident.first, i);
                endPresident.second = max(endPresident.second, j);
            }
        }
    }

    int answer{0};
    char store{president};
    char elementFound;

    if(startPresident.first != 0){
        int rowAbove = startPresident.first - 1;
        for(int j=startPresident.second; j<=endPresident.second; j++){
            elementFound = matrix[rowAbove][j];
            if(elementFound != '.' && elementFound != store){
                answer++;
                store = elementFound;
            }
        }
    }

    if(endPresident.first + 1 != rows){
        int rowBelow = endPresident.first + 1;
        for(int j=startPresident.second; j<=endPresident.second; j++){
            elementFound = matrix[rowBelow][j];
            if(elementFound != '.' && elementFound != store){
                answer++;
                store = elementFound;
            }
        }
    }

    if(startPresident.second != 0){
        int columnPrevious = startPresident.second - 1;
        for(int i=startPresident.first; i<=endPresident.first; i++){
            elementFound = matrix[i][columnPrevious];
            if(elementFound != '.' && elementFound != store){
                answer++;
                store = elementFound;
            }
        }
    }

    if(endPresident.second + 1 != columns){
        int columnNext = endPresident.second + 1;
        for(int i=startPresident.first; i<=endPresident.first; i++){
            elementFound = matrix[i][columnNext];
            if(elementFound != '.' && elementFound != store){
                answer++;
                store = elementFound;
            }
        }
    }

    cout << answer;
    
    return 0;
}
