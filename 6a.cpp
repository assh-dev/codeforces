#include<iostream>
#include<vector>
using namespace std;

bool normal(int a, int b, int c) {
    if(a+b > c && a+c > b && b+c > a){
        return true;
    }
    return false;
}

bool segment(int a, int b, int c) {
    if(a+b >= c && a+c >= b && b+c >= a) {
        return true;
    }
    return false;
}

int main() {
    int a, b, c, d;
    bool segmentFlag = false;
    cin >> a >> b >> c >> d;
    if(normal(a, b, c)){
        cout << "TRIANGLE";
        return 0;
    } if(segment(a, b, c)){
        segmentFlag = true;
    }

    if(normal(a, b, d)){
        cout << "TRIANGLE";
        return 0;
    }
    if(!segmentFlag){
        if(segment(a, b, d)){
            segmentFlag = true;
        }
    }

    if(normal(a, c, d)){
        cout << "TRIANGLE";
        return 0;
    }
    if(!segmentFlag){
        if(segment(a, c, d)){
            segmentFlag = true;
        }
    }

    if(normal(b, c, d)){
        cout << "TRIANGLE";
        return 0;
    }
    if(!segmentFlag){
        if(segment(b, c, d)){
            segmentFlag = true;
        }
    }

    if(segmentFlag){
        cout << "SEGMENT";
        return 0;
    }
    cout << "IMPOSSIBLE";
    return 0;
}
