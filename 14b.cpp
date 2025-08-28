#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numberOfRunners, positionOfBob;
    cin >> numberOfRunners >> positionOfBob;
    int start = 0;
    int end = 1000;

    for(int i=0; i<numberOfRunners; i++){
        int a, b;
        cin >> a >> b;
        int tempStart = min(a, b);
        int tempEnd = max(a, b);

        if(tempStart > end || tempEnd < start){
            cout << -1 << "\n";
            return 0;
        }
        start = max(start, tempStart);
        end = min(end, tempEnd);
    }
    if(positionOfBob >= start && positionOfBob <= end){
        cout << "0\n";
    }
    else{
        cout << min(abs(start - positionOfBob), abs(end - positionOfBob)) << "\n";
    }
    return 0;
}
