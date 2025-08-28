#include<iostream>
using namespace std;

int main() {
    int m, n, a;
    cin >> m >> n >> a;
    long long tobeReturnedM = (m + a - 1LL) / a;
    long long tobeReturnedN = (n + a - 1LL) / a;
    cout << tobeReturnedM * tobeReturnedN << "\n";
    return 0;
}
