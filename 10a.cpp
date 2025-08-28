#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int answer = 0;
    int previousEnd;
    int start, end;
    int n, power1, power2, power3, time1, time2;
    cin >> n >> power1 >> power2 >> power3 >> time1 >> time2;
    
    for(int i=0; i<n; i++){
        cin >> start >> end;
        answer += ((end - start) * power1);

        if(i == 0){
            previousEnd = end;
            continue;
        }
        int rest = start - previousEnd;
        if(rest >= time1){
            answer += (time1 * power1);
            rest -= time1;
            if(rest >= time2){
                answer += (time2 * power2);
                rest -= time2;
                answer += (rest * power3);
            }
            else{
                answer += (rest * power2);
            }
        }
        else{
            answer += (rest * power1);
        }
        previousEnd = end;
    }
    cout << answer << "\n";
}

