#include<iostream>
#include<numeric>
using namespace std;

int findNumber(int i, int number) {
    int remainderSum = 0;
    while(number >= i){
        remainderSum += number % i;
        number /= i;
    }
    remainderSum += number;
    return remainderSum;
}

int main() {
    int number;
    cin >> number;
    int numerator = 0;
    int denominator = number - 2;

    for(int i=2; i<number; i++){
        numerator += findNumber(i, number);
    }

    int g = std::gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;

    cout << numerator << "/" << denominator << "\n";
    return 0;
}
