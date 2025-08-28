#include<iostream>
#include<string>
using namespace std;

int main() {
    int peopleOnline = 0;
    int answer = 0;
    string s;
    while(getline(cin, s)){
        if(s[0] == '+'){
            peopleOnline++;
        }
        else if(s[0] == '-'){
            peopleOnline--;
        }
        else{
            int index = s.find(':');
            answer += ((s.size() - index - 1) * peopleOnline);
        }
    }
    cout << answer << "\n";
    return 0;
}
